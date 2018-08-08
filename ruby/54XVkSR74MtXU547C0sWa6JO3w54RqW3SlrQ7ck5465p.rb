
        
            def translation_scope
      'devise.passwords'
    end
end

    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
      class AccountFinder
    attr_reader :username, :domain
    
        describe 'feed regeneration' do
      before do
        alice = Fabricate(:account)
        bob   = Fabricate(:account)
    
            protected