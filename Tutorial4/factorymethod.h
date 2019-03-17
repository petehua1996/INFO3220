#include <iostream>
#include <string>
#include <vector>

namespace factoryMethod {
    // Product (abstract)
    class Content {
    public:
        Content() {}
        virtual ~Content() {}
        virtual std::string getEncoding() = 0;
    };

    // Concrete Product
    class Image : public Content {
    public:
        std::string getEncoding() override {
            return "png";
        }
    };
    // Concrete Product
    class Text : public Content {
    public:
        std::string getEncoding() override {
            return "ascii";
        }
    };

    // Framework (abstract)
    class Application {
    public:
        Application() {}
        virtual ~Application() {}
        virtual Content* getContent() = 0; // pure virtual
        virtual std::string getAppType() {
            return "boring app";
        }
    };

    // Application one
    class TextDocument: public Application {
        Content* getContent() override {
            return new Text();
        }
        std::string getAppType() {
            return "text document";
        }
    };

    // Application two
    class ImageEditor: public Application {
        Content* getContent() override {
            return new Image();
        }
        std::string getAppType() {
            return "image editor";
        }
    };

    int run() {
        Application* myFirstTextDocument = new TextDocument();
        Application* paintDotNet = new ImageEditor();

        std::vector<Application*> applications;
        applications.push_back(myFirstTextDocument);
        applications.push_back(paintDotNet);

        for (auto* app : applications) {
            Content* content = app->getContent();
            std::cout <<app->getAppType() << "'s content has " << content->getEncoding() << " encoding" << std::endl;
            delete content;
            delete app;
        }

        return 0;
    }
}
