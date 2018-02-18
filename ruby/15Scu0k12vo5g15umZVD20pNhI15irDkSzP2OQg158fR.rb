
        
        module Homebrew
  def build_env_keys(env)
    %w[
      CC CXX LD OBJC OBJCXX
      HOMEBREW_CC HOMEBREW_CXX
      CFLAGS CXXFLAGS CPPFLAGS LDFLAGS SDKROOT MAKEFLAGS
      CMAKE_PREFIX_PATH CMAKE_INCLUDE_PATH CMAKE_LIBRARY_PATH CMAKE_FRAMEWORK_PATH
      MACOSX_DEPLOYMENT_TARGET PKG_CONFIG_PATH PKG_CONFIG_LIBDIR
      HOMEBREW_DEBUG HOMEBREW_MAKE_JOBS HOMEBREW_VERBOSE
      HOMEBREW_SVN HOMEBREW_GIT
      HOMEBREW_SDKROOT HOMEBREW_BUILD_FROM_SOURCE
      MAKE GIT CPP
      ACLOCAL_PATH PATH CPATH].select { |key| env.key?(key) }
  end
    
    gem 'rails-controller-testing'
    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
          module ClassMethods
        # Define authentication filters and accessor helpers for a group of mappings.
        # These methods are useful when you are working with multiple mappings that
        # share some functionality. They are pretty much the same as the ones
        # defined for normal mappings.
        #
        # Example:
        #
        #   inside BlogsController (or any other controller, it doesn't matter which):
        #     devise_group :blogger, contains: [:user, :admin]
        #
        #   Generated methods:
        #     authenticate_blogger!  # Redirects unless user or admin are signed in
        #     blogger_signed_in?     # Checks whether there is either a user or an admin signed in
        #     current_blogger        # Currently signed in user or admin
        #     current_bloggers       # Currently signed in user and admin
        #
        #   Use:
        #     before_action :authenticate_blogger!              # Redirects unless either a user or an admin are authenticated
        #     before_action ->{ authenticate_blogger! :admin }  # Redirects to the admin login page
        #     current_blogger :user                             # Preferably returns a User if one is signed in
        #
        def devise_group(group_name, opts={})
          mappings = '[#{ opts[:contains].map { |m| ':#{m}' }.join(',') }]'
    
        private
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
        def log_status(status)
      puts bold status
    end
    
            @normalized_styles = styles.dup
        styles.each_pair do |name, options|
          @normalized_styles[name.to_sym] = Paperclip::Style.new(name.to_sym, options.dup, self)
        end
      end
      @normalized_styles
    end
    
        def self.names_for(klass)
      instance.names_for(klass)
    end
    
        def possible_types
      MIME::Types.type_for(@filepath).collect(&:content_type)
    end
    
        def define_getters
      define_instance_getter
      define_class_getter
    end
    
            def no_error_when_valid?
          @file = StringIO.new('.')
          @subject.send(@attachment_name).assign(@file)
          @subject.valid?
          expected_message = [
            @attachment_name.to_s.titleize,
            I18n.t(:blank, scope: [:errors, :messages])
          ].join(' ')
          @subject.errors.full_messages.exclude?(expected_message)
        end
      end
    end
  end
end

    
            def matches? subject
          @subject = subject
          @subject = @subject.new if @subject.class == Class
          lower_than_low? && higher_than_low? && lower_than_high? && higher_than_high?
        end