
        
            gu = GroupUser.find_by(user_id: moderator.id, group_id: group.id)
    expect(gu.notification_level).to eq(NotificationLevels.all[:watching])
    
          resources :variants do
        resources :images
      end
    
    namespace :gem do
  def version
    require 'spree/core/version'
    Spree.version
  end
    
            def user_id
          params[:order][:user_id] if params[:order]
        end
    
            def line_items_attributes
          { line_items_attributes: {
            id: params[:id],
            quantity: params[:line_item][:quantity],
            options: line_item_params[:options] || {}
          } }
        end
    
            def create
          authorize! :create, Spree::OptionValue
          @option_value = scope.new(option_value_params)
          if @option_value.save
            render :show, status: 201
          else
            invalid_resource!(@option_value)
          end
        end
    
            def create
          @order.validate_payments_attributes([payment_params])
          @payment = @order.payments.build(payment_params)
          if @payment.save
            respond_with(@payment, status: 201, default_template: :show)
          else
            invalid_resource!(@payment)
          end
        end
    
    $redis = Redis.new
    
    module Sidekiq
  module Extensions
    ##
    # Adds 'delay', 'delay_for' and `delay_until` methods to ActionMailer to offload arbitrary email
    # delivery to Sidekiq.  Example:
    #
    #    UserMailer.delay.send_welcome_email(new_user)
    #    UserMailer.delay_for(5.days).send_welcome_email(new_user)
    #    UserMailer.delay_until(5.days.from_now).send_welcome_email(new_user)
    class DelayedMailer
      include Sidekiq::Worker
    
        def self.logger
      defined?(@logger) ? @logger : initialize_logger
    end
    
        scripts = register_script('post-install',   :after_install,   scripts)
    scripts = register_script('pre-install',   :before_install,  scripts)
    scripts = register_script('pre-upgrade',   :before_upgrade,  scripts)
    scripts = register_script('post-upgrade',   :after_upgrade,  scripts)
    scripts = register_script('pre-deinstall',  :before_remove,   scripts)
    scripts = register_script('post-deinstall', :after_remove,    scripts)
    
      dont_obsolete_paths = []
  option '--dont-obsolete', 'DONT_OBSOLETE_PATH',
    'A file path for which to 'dont-obsolete' in the built PackageInfo. ' \
    'Can be specified multiple times.' do |path|
      dont_obsolete_paths << path
    end
    
        files = []
    Find.find('.') do |path|
      stat = File.lstat(path)
      next unless stat.symlink? or stat.file?
      files << path
    end
    ::Dir.chdir(cwd)
    
        # Copy 'files' from builddir to :output/files
    Find.find('files', 'manifests') do |path|
      logger.info('Copying path: #{path}')
      if File.directory?(path)
        ::Dir.mkdir(File.join(params[:output], path))
      else
        FileUtils.cp(path, File.join(params[:output], path))
      end
    end
  end # def build!