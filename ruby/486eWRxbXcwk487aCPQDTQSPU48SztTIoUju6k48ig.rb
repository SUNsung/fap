
        
          # Clean a top-level (bin, sbin, lib) directory, recursively, by fixing file
  # permissions and removing .la files, unless the files (or parent
  # directories) are protected by skip_clean.
  #
  # bin and sbin should not have any subdirectories; if either do that is
  # caught as an audit warning
  #
  # lib may have a large directory tree (see Erlang for instance), and
  # clean_dir applies cleaning rules to the entire tree
  def clean_dir(d)
    d.find do |path|
      path.extend(ObserverPathnameExtension)
    
      def hardware
    'CPU: #{Hardware.cores_as_words}-core #{Hardware::CPU.bits}-bit #{Hardware::CPU.family}'
  end
    
            $stderr.puts
        opoo out
        Homebrew.failed = true
        first_warning = false
      end
    end
    
        projects
  end
end

    
            # Find a record for confirmation by unconfirmed email field
        def find_by_unconfirmed_email_with_errors(attributes = {})
          attributes = attributes.slice(*confirmation_keys).permit!.to_h if attributes.respond_to? :permit
          unconfirmed_required_attributes = confirmation_keys.map { |k| k == :email ? :unconfirmed_email : k }
          unconfirmed_attributes = attributes.symbolize_keys
          unconfirmed_attributes[:unconfirmed_email] = unconfirmed_attributes.delete(:email)
          find_or_initialize_with_errors(unconfirmed_required_attributes, unconfirmed_attributes, :not_found)
        end
    
      test 'should be active without confirmation when confirmation is not required' do
    user = create_user
    user.instance_eval { def confirmation_required?; false end }
    user.confirmation_sent_at = nil
    user.save
    assert user.reload.active_for_authentication?
  end
    
      # GET /resource/unlock/new
  def new
    self.resource = resource_class.new
  end
    
      # Gets the actual resource stored in the instance variable
  def resource
    instance_variable_get(:'@#{resource_name}')
  end
    
        # Try retrieving the URL options from the parent controller (usually
    # ApplicationController). Instance methods are not supported at the moment,
    # so only the class-level attribute is used.
    def self.default_url_options(*args)
      if defined?(Devise.parent_controller.constantize)
        Devise.parent_controller.constantize.try(:default_url_options) || {}
      else
        {}
      end
    end
    
            # This returns all the registered commands.
        #
        # @return [Registry<Symbol, Array<Proc, Hash>>]
        def commands
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.commands)
            end
          end
        end
    
          protected
    
        end
    
        # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 143 and pkt.tcp_dport != 143)
    s = find_session((pkt.tcp_sport == 143) ? get_session_src(pkt) : get_session_dst(pkt))
    s[:sname] ||= 'imap4'
    
    fileOutJar 	= clsFile.new_with_sig('Ljava.lang.String;', 'output.jar')
filesIn		= Array.new
    
        def tasks_without_stage_dependency
      stages + default_tasks
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
    
      deploy_rb = File.expand_path('../../templates/deploy.rb.erb', __FILE__)
  stage_rb = File.expand_path('../../templates/stage.rb.erb', __FILE__)
  capfile = File.expand_path('../../templates/Capfile', __FILE__)
    
            def on_percent_literal(node)
          each_unnecessary_space_match(node) do |range|
            add_offense(node, location: range)
          end
        end
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for optional arguments to methods
      # that do not come at the end of the argument list
      #
      # @example
      #   # bad
      #   def foo(a = 1, b, c)
      #   end
      #
      #   # good
      #   def baz(a, b, c = 1)
      #   end
      #
      #   def foobar(a = 1, b = 2, c = 3)
      #   end
      class OptionalArguments < Cop
        MSG = 'Optional arguments should appear at the end ' \
              'of the argument list.'.freeze
    
              FROZEN_STRING_LITERAL_TYPES.include?(node.type) &&
            frozen_string_literals_enabled?
        end
      end
    end
  end
end
