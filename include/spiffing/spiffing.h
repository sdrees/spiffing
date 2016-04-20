//
// Created by dwd on 03/09/15.
//

#ifndef SPIFFING_SPIFFING_H
#define SPIFFING_SPIFFING_H

#include <spiffing/spif.h>

namespace Spiffing {
    class Site {
    public:
        Site();

        static Site &site();
        std::shared_ptr<Spif> const & spif(std::string const & oid) const;
        std::shared_ptr<Spif> const & spif_by_name(std::string const & name) const;
        std::shared_ptr<Spif> load(std::istream & filename);
    private:
        std::map<std::string /*oid*/, std::shared_ptr<Spif>> m_spifs;
        std::map<std::string /*name*/, std::shared_ptr<Spif>> m_spifnames;
    };
}

#endif //SPIFFING_SPIFFING_H
