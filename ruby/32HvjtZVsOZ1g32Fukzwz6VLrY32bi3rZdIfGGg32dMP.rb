
        
            if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
    module Devise
  module Controllers
    # Provide the ability to store a location.
    # Used to redirect back to a desired path after sign in.
    # Included by default in all controllers.
    module StoreLocation
      # Returns and delete (if it's navigational format) the url stored in the session for
      # the given scope. Useful for giving redirect backs after sign up:
      #
      # Example:
      #
      #   redirect_to stored_location_for(:user) || root_path
      #
      def stored_location_for(resource_or_scope)
        session_key = stored_location_key_for(resource_or_scope)
    
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
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
              record = to_adapter.get(id)
          record if record && record.remember_me?(token, generated_at)
        end
    
          case key
      when Array
        for k in key
          def_inspector(k, inspector)
        end
      when Symbol
        INSPECTORS[key] = inspector
        INSPECTORS[key.to_s] = inspector
      when String
        INSPECTORS[key] = inspector
        INSPECTORS[key.intern] = inspector
      else
        INSPECTORS[key] = inspector
      end
    end
    
              EOS
        end
      end
    end
    
    def tar_create(tarball, dir)
  require 'rubygems'
  require 'rubygems/package'
  require 'rubygems/package/tar_writer'
  header = Gem::Package::TarHeader
  dir_type = '5'
  uname = gname = 'ruby'
  File.open(tarball, 'wb') do |f|
    w = Gem::Package::TarWriter.new(f)
    Dir.glob('#{dir}/**/*', File::FNM_DOTMATCH) do |path|
      next if File.basename(path) == '.'
      s = File.stat(path)
      mode = 0644
      case
      when s.file?
        type = nil
        size = s.size
        mode |= 0111 if s.executable?
      when s.directory?
        path += '/'
        type = dir_type
        size = 0
        mode |= 0111
      else
        next
      end
      name, prefix = w.split_name(path)
      h = header.new(name: name, prefix: prefix, typeflag: type,
                     mode: mode, size: size, mtime: s.mtime,
                     uname: uname, gname: gname)
      f.write(h)
      if size > 0
        IO.copy_stream(path, f)
        f.write('\0' * (-size % 512))
      end
    end
  end
  true
rescue => e
  warn e.message
  false
end
    
      it 'initializes a new UDPSocket using a Symbol' do
    @socket = UDPSocket.new(:INET)
    @socket.should be_an_instance_of(UDPSocket)
  end
    
      class Foo
    def x
      return 'Foo#x'
    end
    
      def test_pid_after_close_read
    pid1 = pid2 = nil
    IO.popen('exit ;', 'r+') do |io|
      pid1 = io.pid
      io.close_read
      pid2 = io.pid
    end
    assert_not_nil(pid1)
    assert_equal(pid1, pid2)
  end
    
          def pretty_print(q)
        q.group(2, '#<#{self.class}:', '>') {
          q.breakable
          q.text('#{event}@#{pos[0]}:#{pos[1]}')
          q.breakable
          q.text('token: ')
          tok.pretty_print(q)
          if message
            q.breakable
            q.text('message: ')
            q.text(message)
          end
        }
      end
    
          def pack_uri(plugin_name)
        url = '#{elastic_pack_base_uri}/#{plugin_name}/#{plugin_name}-#{LOGSTASH_VERSION}.#{PACK_EXTENSION}'
        URI.parse(url)
      end
    
              it 'allow to install a specific version' do
            command = logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version 0.1.0 logstash-filter-qatest')
            expect(command).to install_successfully
            expect(logstash).to have_installed?('logstash-filter-qatest', '0.1.0')
          end
        end
      end
    
          def field_container(model, method, options = {}, &block)
        css_classes = options[:class].to_a
        css_classes << 'field'
        css_classes << 'withError' if error_message_on(model, method).present?
        content_tag(
          :div, capture(&block),
          options.merge(class: css_classes.join(' '), id: '#{model}_#{method}_field')
        )
      end
    
              @line_item = Spree::Dependencies.cart_add_item_service.constantize.call(order: order,
                                                                                  variant: variant,
                                                                                  quantity: params[:line_item][:quantity],
                                                                                  options: line_item_params[:options]).value
          if @line_item.errors.empty?
            respond_with(@line_item, status: 201, default_template: :show)
          else
            invalid_resource!(@line_item)
          end
        end
    
              def shipping_rates_serializer
            Spree::Api::Dependencies.storefront_shipment_serializer.constantize
          end