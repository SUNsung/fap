
        
        multitask :default => [:test, :features]
    
    def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
      </body>
</html>
HTML
    
          def site
        @site_drop ||= SiteDrop.new(@obj)
      end
    
        # The path used after sending unlock password instructions
    def after_sending_unlock_instructions_path_for(resource)
      new_session_path(resource) if is_navigational_format?
    end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
        def default_constraints(options)
      @constraints = Hash.new
      @constraints.merge!(options[:constraints]) if options[:constraints]
    end
    
              if recoverable.persisted?
            if recoverable.reset_password_period_valid?
              recoverable.reset_password(attributes[:password], attributes[:password_confirmation])
            else
              recoverable.errors.add(:reset_password_token, :expired)
            end
          end
    
          def time_from_json(value)
        if value =~ /\A\d+\.\d+\Z/
          Time.at(value.to_f)
        else
          Time.parse(value) rescue nil
        end
      end
    
          def self.required_fields(klass)
        []
      end