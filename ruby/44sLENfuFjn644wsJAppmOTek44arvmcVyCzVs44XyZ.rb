
        
        begin
  require 'cucumber/rake/task'
  Cucumber::Rake::Task.new(:features) do |t|
    t.profile = 'travis'
  end
  Cucumber::Rake::Task.new(:'features:html', 'Run Cucumber features and produce HTML output') do |t|
    t.profile = 'html_report'
  end
rescue LoadError
  desc 'Cucumber rake task not available'
  task :features do
    abort 'Cucumber rake task is not available. Be sure to install cucumber as a gem or plugin'
  end
end
    
    def envygeeks(url)
  return url if url.end_with?(FORWARD_SLASH) || url == FORWARD_SLASH
    
    When(%r!^I decide to build the theme gem$!) do
  Dir.chdir(Paths.theme_gem_dir)
  File.new('_includes/blank.html', 'w')
  File.new('_sass/blank.scss', 'w')
  File.new('assets/blank.scss', 'w')
end
    
          #
    
            def setup
          @config['syntax_highlighter'] ||= highlighter
          @config['syntax_highlighter_opts'] ||= {}
          @config['coderay'] ||= {} # XXX: Legacy.
          modernize_coderay_config
          make_accessible
        end
    
          def perform(start_id, stop_id)
        update = '
          latest_merge_request_diff_id = (
            SELECT MAX(id)
            FROM merge_request_diffs
            WHERE merge_requests.id = merge_request_diffs.merge_request_id
          )'.squish
    
            # issue - An instance of `Gitlab::GithubImport::Representation::Issue`
        # project - An instance of `Project`
        # client - An instance of `Gitlab::GithubImport::Client`
        def initialize(issue, project, client)
          @issue = issue
          @project = project
          @client = client
          @label_finder = LabelFinder.new(project)
        end
    
          # Returns true if the given object has already been imported, false
      # otherwise.
      #
      # object - The object to check.
      def already_imported?(object)
        id = id_for_already_imported_cache(object)
    
          protected
    
          # Checks whether the user session has expired based on configured time.
      def timedout?(last_access)
        !timeout_in.nil? && last_access && last_access <= timeout_in.ago
      end
    
    module Vagrant
  # This class handles guest-OS specific interactions with a machine.
  # It is primarily responsible for detecting the proper guest OS
  # implementation and then delegating capabilities.
  #
  # Vagrant has many tasks which require specific guest OS knowledge.
  # These are implemented using a guest/capability system. Various plugins
  # register as 'guests' which determine the underlying OS of the system.
  # Then, 'guest capabilities' register themselves for a specific OS (one
  # or more), and these capabilities are called.
  #
  # Example capabilities might be 'mount_virtualbox_shared_folder' or
  # 'configure_networks'.
  #
  # This system allows for maximum flexibility and pluginability for doing
  # guest OS specific operations.
  class Guest
    include CapabilityHost
    
                    raise Errors::VMNoMatchError if vms.empty?
              else
                # String name, just look for a specific VM
                vms << @env.vms[name.to_sym]
                raise Errors::VMNotFoundError, name: name if !vms[0]
              end
            end
          else
            vms = @env.vms_ordered
          end
    
            # This is the method called to when the system is being destroyed
        # and allows the provisioners to engage in any cleanup tasks necessary.
        def cleanup
        end
      end
    end
  end
end

    
    desc 'Generates a dummy app for testing for every Spree engine'
task :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rake test_app'
    end
  end
end
    
              def render_order(result)
            if result.success?
              render_serialized_payload { serialized_current_order }
            else
              render_error_payload(result.error)
            end
          end
    
          before_action :set_content_type
      before_action :load_user
      before_action :authorize_for_order, if: proc { order_token.present? }
      before_action :authenticate_user
      before_action :load_user_roles
    
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
    
            def scope
          @scope ||= if params[:option_type_id]
                       Spree::OptionType.find(params[:option_type_id]).option_values.accessible_by(current_ability, :read)
                     else
                       Spree::OptionValue.accessible_by(current_ability, :read).load
                     end
        end
    
            def index
          @product_properties = @product.product_properties.accessible_by(current_ability, :read).
                                ransack(params[:q]).result.
                                page(params[:page]).per(params[:per_page])
          respond_with(@product_properties)
        end
    
            def destroy
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :destroy).find(params[:id])
          @return_authorization.destroy
          respond_with(@return_authorization, status: 204)
        end
    
      # Map of what scripts are named.
  SCRIPT_MAP = {
    :before_install     => 'preinstall',
    :after_install      => 'postinstall',
  } unless defined?(SCRIPT_MAP)
    
      def parse_install_script(path)
    global_lines = []
    look_for = Set.new(['pre_install', 'post_install',
                        'pre_upgrade', 'post_upgrade',
                        'pre_remove', 'post_remove'])
    functions = {}
    look_for.each do |fname|
      functions[fname] = []
    end
    
    end
    
          safesystem(attributes[:python_bin], 'setup.py', 'install', *flags)
    end
  end # def install_to_staging
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for tar.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end