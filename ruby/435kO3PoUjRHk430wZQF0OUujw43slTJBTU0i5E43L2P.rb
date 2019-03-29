
        
          def serialize_options(resource)
    methods = resource_class.authentication_keys.dup
    methods = methods.keys if methods.is_a?(Hash)
    methods << :password if resource.respond_to?(:password)
    { methods: methods, only: [:password] }
  end
    
          attr_reader :scope_name, :resource
    
        def default_used_route(options)
      singularizer = lambda { |s| s.to_s.singularize.to_sym }
    
        # Recoverable takes care of resetting the user password and send reset instructions.
    #
    # ==Options
    #
    # Recoverable adds the following options to devise_for:
    #
    #   * +reset_password_keys+: the keys you want to use when recovering the password for an account
    #   * +reset_password_within+: the time period within which the password must be reset or the token expires.
    #   * +sign_in_after_reset_password+: whether or not to sign in the user automatically after a password reset.
    #
    # == Examples
    #
    #   # resets the user password and save the record, true if valid passwords are given, otherwise false
    #   User.find(1).reset_password('password123', 'password123')
    #
    #   # creates a new token and send it with instructions about how to reset the password
    #   User.find(1).send_reset_password_instructions
    #
    module Recoverable
      extend ActiveSupport::Concern
    
        def_delegators :@s, :scan_until, :skip_until, :string
    
      def test_font_helper_with_suffix_sharp
    assert_match %r(url\(['']?/assets/.*svg#.+['']?\)), @css
  end
    
      node[:applications].each do |app, data|
    template '/etc/monit.d/sidekiq_#{app}.monitrc' do 
      owner 'root' 
      group 'root' 
      mode 0644 
      source 'monitrc.conf.erb' 
      variables({ 
        :num_workers => worker_count,
        :app_name => app, 
        :rails_env => node[:environment][:framework_env] 
      }) 
    end
    
          def insert_before(oldklass, newklass, *args)
        i = entries.index { |entry| entry.klass == newklass }
        new_entry = i.nil? ? Entry.new(newklass, *args) : entries.delete_at(i)
        i = entries.index { |entry| entry.klass == oldklass } || 0
        entries.insert(i, new_entry)
      end
    
        def patch(path, &block)
      route(PATCH, path, &block)
    end