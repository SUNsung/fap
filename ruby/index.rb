
        
        end

    
    module Vagrant
  module Plugin
    module V2
      # This is the base class for a provider for the V2 API. A provider
      # is responsible for creating compute resources to match the needs
      # of a Vagrant-configured system.
      class Provider
        include CapabilityHost
    
                  # Read!
              data << io.readpartial(READ_CHUNK_SIZE).encode('UTF-8', Encoding.default_external)
            else
              # Do a simple non-blocking read on the IO object
              data << io.read_nonblock(READ_CHUNK_SIZE)
            end
          rescue Exception => e
            # The catch-all rescue here is to support multiple Ruby versions,
            # since we use some Ruby 1.9 specific exceptions.
    
          if record.created_at.nil? || record.created_at >= now || record.created_at == record.updated_at
        yield
      else
        record.id = Mastodon::Snowflake.id_at(record.created_at)
        tries     = 0
    
            def initialize
          @values = []
        end
    
            on roles(target_roles) do
          unless test '[ -f #{file.to_s.shellescape} ]'
            info 'Uploading #{prerequisite_file} to #{file}'
            upload! File.open(prerequisite_file), file
          end
        end
      end
    end
    
    # IMPORTANT: The Capistrano::Plugin system is not yet considered a stable,
# public API, and is subject to change without notice. Eventually it will be
# officially documented and supported, but for now, use it at your own risk.
#
# Base class for Capistrano plugins. Makes building a Capistrano plugin as easy
# as writing a `Capistrano::Plugin` subclass and overriding any or all of its
# three template methods:
#
# * set_defaults
# * register_hooks
# * define_tasks
#
# Within the plugin you can use any methods of the Rake or Capistrano DSLs, like
# `fetch`, `invoke`, etc. In cases when you need to use SSHKit's backend outside
# of an `on` block, use the `backend` convenience method. E.g. `backend.test`,
# `backend.execute`, or `backend.capture`.
#
# Package up and distribute your plugin class as a gem and you're good to go!
#
# To use a plugin, all a user has to do is install it in the Capfile, like this:
#
#   # Capfile
#   require 'capistrano/superfancy'
#   install_plugin Capistrano::Superfancy
#
# Or, to install the plugin without its hooks:
#
#   # Capfile
#   require 'capistrano/superfancy'
#   install_plugin Capistrano::Superfancy, load_hooks: false
#
class Capistrano::Plugin < Rake::TaskLib
  include Capistrano::DSL
    
      desc 'Started'
  task :started do
  end
    
      describe 'role_properties()' do
    before do
      dsl.role :redis, %w[example1.com example2.com], redis: { port: 6379, type: :slave }
      dsl.server 'example1.com', roles: %w{web}, active: true, web: { port: 80 }
      dsl.server 'example2.com', roles: %w{web redis}, web: { port: 81 }, redis: { type: :master }
      dsl.server 'example3.com', roles: %w{app}, primary: true
    end
    
            def show
          authorize! :read, @order, order_token
          @address = find_address
          respond_with(@address)
        end
    
            def stock_location_params
          params.require(:stock_location).permit(permitted_stock_location_attributes)
        end
      end
    end
  end
end

    
      context 'called with three widths' do
    it 'applies second width to left and right' do
      rule = 'border-width: 4px 5px 6px'