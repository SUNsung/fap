
        
          def after_omniauth_failure_path_for(scope)
    new_session_path(scope)
  end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
          private
    
            @email = headers[:to]
        headers
      end
    
        def default_used_route(options)
      singularizer = lambda { |s| s.to_s.singularize.to_sym }
    
        def dry_run
      ['--dry-run', '-n',
       'Do a dry run without executing actions',
       lambda do |_value|
         Configuration.env.set(:sshkit_backend, SSHKit::Backend::Printer)
       end]
    end