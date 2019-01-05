
        
            if ARGV.include?('--pinned') || ARGV.include?('--versions')
      filtered_list
    elsif ARGV.named.empty?
      if ARGV.include? '--full-name'
        full_names = Formula.installed.map(&:full_name).sort do |a, b|
          if a.include?('/') && !b.include?('/')
            1
          elsif !a.include?('/') && b.include?('/')
            -1
          else
            a <=> b
          end
        end
        puts_columns full_names
      else
        ENV['CLICOLOR'] = nil
        exec 'ls', *ARGV.options_only << HOMEBREW_CELLAR
      end
    elsif ARGV.verbose? || !$stdout.tty?
      exec 'find', *ARGV.kegs.map(&:to_s) + %w[-not -type d -print]
    else
      ARGV.kegs.each { |keg| PrettyListing.new keg }
    end
  end
    
          it 'deactivates an existing user' do
        visit admin_users_path
        expect(page).to have_no_text('inactive')
        find(:css, 'a[href='/admin/users/#{users(:bob).id}/deactivate']').click
        expect(page).to have_text('inactive')
        users(:bob).reload
        expect(users(:bob)).not_to be_active
      end
    
        it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
        def effective_url
      @effective_url ||= URL.parse super
    end
    
        def options
      @options ||= self.class.options.deep_dup.tap do |options|
        options.merge! base_url: base_url, root_url: root_url,
                       root_path: root_path, initial_paths: initial_paths,
                       version: self.class.version, release: self.class.release
    
          dest = url.normalized_path
      dest_dir = Pathname.new(dest)
    
        if resource.errors.empty?
      set_flash_message!(:notice, :confirmed)
      respond_with_navigational(resource){ redirect_to after_confirmation_path_for(resource_name, resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
        def no_input_strategies
      self.strategies & Devise::NO_INPUT
    end
    
              # Go through each VM and yield it!
          vms.each do |old_vm|
            # We get a new VM from the environment here to avoid potentially
            # stale VMs (if there was a config reload on the environment
            # or something).
            vm = @env.vms[old_vm.name]
            yield vm
          end
        end
    
            # Initializes the communicator with the machine that we will be
        # communicating with. This base method does nothing (it doesn't
        # even store the machine in an instance variable for you), so you're
        # expected to override this and do something with the machine if
        # you care about it.
        #
        # @param [Machine] machine The machine this instance is expected to
        #   communicate with.
        def initialize(machine)
        end
    
            # This clears out all the registered plugins. This is only used by
        # unit tests and should not be called directly.
        def reset!
          @registered.clear
        end
    
            # Parses the options given an OptionParser instance.
        #
        # This is a convenience method that properly handles duping the
        # originally argv array so that it is not destroyed.
        #
        # This method will also automatically detect '-h' and '--help'
        # and print help. And if any invalid options are detected, the help
        # will be printed, as well.
        #
        # If this method returns `nil`, then you should assume that help
        # was printed and parsing failed.
        def parse_options(opts=nil)
          # make sure optparse doesn't use POSIXLY_CORRECT parsing
          ENV['POSIXLY_CORRECT'] = nil
    
        def require_local_account!
      redirect_to admin_account_path(@account.id) unless @account.local? && @account.user.present?
    end
    
        def status_params
      params.require(:status).permit(:sensitive)
    end
    
      def status_finder
    StatusFinder.new(params[:url])
  end
    
    class Api::Web::SettingsController < Api::Web::BaseController
  respond_to :json
    
          if @user.persisted?
        sign_in_and_redirect @user, event: :authentication
        set_flash_message(:notice, :success, kind: provider_id.capitalize) if is_navigational_format?
      else
        session['devise.#{provider}_data'] = request.env['omniauth.auth']
        redirect_to new_user_registration_url
      end
    end
  end
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
        # Pulled from Rack::ShowExceptions in order to override TEMPLATE.
    # If Rack provides another way to override, this could be removed
    # in the future.
    def pretty(env, exception)
      req = Rack::Request.new(env)
    
      it 'denies post requests without any token' do
    expect(post('/')).not_to be_ok
  end
    
          def load_user_roles
        @current_user_roles = @current_api_user ? @current_api_user.spree_roles.pluck(:name) : []
      end
    
            include Spree::Core::ControllerHelpers::Auth
        include Spree::Core::ControllerHelpers::Order
        # This before_action comes from Spree::Core::ControllerHelpers::Order
        skip_before_action :set_current_order
    
            def create
          authorize! :create, Property
          @property = Spree::Property.new(property_params)
          if @property.save
            respond_with(@property, status: 201, default_template: :show)
          else
            invalid_resource!(@property)
          end
        end
    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end
    
      class Blockquote < Liquid::Block
    FullCiteWithTitle = /(\S.*)\s+(https?:\/\/)(\S+)\s+(.+)/i
    FullCite = /(\S.*)\s+(https?:\/\/)(\S+)/i
    AuthorTitle = /([^,]+),([^,]+)/
    Author =  /(.+)/
    
      class ImageTag < Liquid::Tag
    @img = nil
    
        def render(context)
      code_dir = (context.registers[:site].config['code_dir'].sub(/^\//,'') || 'downloads/code')
      code_path = (Pathname.new(context.registers[:site].source) + code_dir).expand_path
      file = code_path + @file
    
      # Summary is used on the Archive pages to return the first block of content from a post.
  def summary(input)
    if input.index(/\n\n/)
      input.split(/\n\n/)[0]
    else
      input
    end
  end
    
          unless file.file?
        return 'File #{file} could not be found'
      end