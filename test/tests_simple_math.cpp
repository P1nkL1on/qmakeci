#include <QtTest>

class TestsSimpleMath : public QObject
{
    Q_OBJECT
private slots:
    void compare2and2();

};

void TestsSimpleMath::compare2and2()
{
    QCOMPARE(2, 2);
}

QTEST_APPLESS_MAIN(TestsSimpleMath)

#include "tests_simple_math.moc"
