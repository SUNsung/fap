        # Checks if the user confirmation happens before the token becomes invalid
        # Examples:
        #
        #   # confirm_within = 3.days and confirmation_sent_at = 2.days.ago
        #   confirmation_period_expired?  # returns false
        #
        #   # confirm_within = 3.days and confirmation_sent_at = 4.days.ago
        #   confirmation_period_expired?  # returns true
        #
        #   # confirm_within = nil
        #   confirmation_period_expired?  # will always return false
        #
        def confirmation_period_expired?
          self.class.confirm_within && self.confirmation_sent_at && (Time.now.utc > self.confirmation_sent_at.utc + self.class.confirm_within)
        end
    
          user.confirmation_sent_at = 4.days.ago
      assert user.active_for_authentication?
    
    platforms :ruby do
  gem 'sqlite3'
end
    
        if successfully_sent?(resource)
      respond_with({}, location: after_sending_unlock_instructions_path_for(resource))
    else
      respond_with(resource)
    end
  end
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
      # Register available devise modules. For the standard modules that Devise provides, this method is
  # called from lib/devise/modules.rb. Third-party modules need to be added explicitly using this method.
  #
  # Note that adding a module using this method does not cause it to be used in the authentication
  # process. That requires that the module be listed in the arguments passed to the 'devise' method
  # in the model class definition.
  #
  # == Options:
  #
  #   +model+      - String representing the load path to a custom *model* for this module (to autoload.)
  #   +controller+ - Symbol representing the name of an existing or custom *controller* for this module.
  #   +route+      - Symbol representing the named *route* helper for this module.
  #   +strategy+   - Symbol representing if this module got a custom *strategy*.
  #   +insert_at+  - Integer representing the order in which this module's model will be included
  #
  # All values, except :model, accept also a boolean and will have the same name as the given module
  # name.
  #
  # == Examples:
  #
  #   Devise.add_module(:party_module)
  #   Devise.add_module(:party_module, strategy: true, controller: :sessions)
  #   Devise.add_module(:party_module, model: 'party_module/model')
  #   Devise.add_module(:party_module, insert_at: 0)
  #
  def self.add_module(module_name, options = {})
    options.assert_valid_keys(:strategy, :model, :controller, :route, :no_input, :insert_at)
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
        def relative_path_to(url)
      url = self.class.parse(url)
      return unless origin == url.origin
    
            doc
      end
    end
  end
end

    
        # Writes the attachment-specific attribute on the instance. For example,
    # instance_write(:file_name, 'me.jpg') will write 'me.jpg' to the instance's
    # 'avatar_file_name' field (assuming the attachment is called avatar).
    def instance_write(attr, value)
      setter = :'#{@name_string}_#{attr}='
      if instance.respond_to?(setter)
        instance.send(setter, value)
      end
    end
    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end

    
        # scale to the requested geometry and preserve the aspect ratio
    def scale_to(new_geometry)
      scale = [new_geometry.width.to_f / self.width.to_f , new_geometry.height.to_f / self.height.to_f].min
      Paperclip::Geometry.new((self.width * scale).round, (self.height * scale).round)
    end
  end
end

    
            if attachment.nil?
          attachment = Attachment.new(name, self, options)
          instance_variable_set(ivar, attachment)
        end
    
      def full_plugin_name
    @full_plugin_name ||= 'logstash-#{type}-#{name.downcase}'
  end
end

    
      protected
  def extract_fields(filter_string)
    (filter_string.empty? ? [] : filter_string.split(',').map { |s| s.strip.to_sym })
  end
    
              def plugins
            @plugins ||= find_plugins_gem_specs.map do |spec|
              { :name => spec.name, :version => spec.version.to_s }
            end.sort_by do |spec|
              spec[:name]
            end
          end
    
      public
  def clone
    return self.class.new(params)
  end
end; end # class LogStash::Codecs::Base

    
        def _1
      elements[1]
    end