#ifndef HOSTSERIALIZER_TEST_H
#define HOSTSERIALIZER_TEST_H

#include <QObject>

namespace cstests
{
    class Test_HostSerializer : public QObject
    {
        Q_OBJECT

    public:
        explicit Test_HostSerializer(QObject* parent = nullptr);

    private slots:
        void deserialize();
        void serialize();
        void split();
    };
}

#endif // HOSTSERIALIZER_TEST_H
