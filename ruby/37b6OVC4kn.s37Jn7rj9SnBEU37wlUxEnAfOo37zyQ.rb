
        
        gemfile(true) do
  source 'https://rubygems.org'
  # Activate the gem you are reporting the issue against.
  gem 'rails', '~> 4.2.0'
  gem 'devise', '~> 4.0'
  gem 'sqlite3'
  gem 'byebug'
end
    
          # Sign out all active users or scopes. This helper is useful for signing out all roles
      # in one click. This signs out ALL scopes in warden. Returns true if there was at least one logout
      # and false if there was no user logged in on all scopes.
      def sign_out_all_scopes(lock=true)
        users = Devise.mappings.keys.map { |s| warden.user(scope: s, run_callbacks: false) }
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
          def message
        'The following attribute(s) is (are) missing on your model: #{@attributes.join(', ')}'
      end
    end
    
        private_constant :AIR_APPLICATION_INSTALLER