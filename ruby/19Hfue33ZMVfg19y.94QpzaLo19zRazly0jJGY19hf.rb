
        
              class_reference_from_action_name(alias_found.to_sym)
    end
    
        def run(action_named: nil, action_class_ref: nil, parameter_map: nil)
      action_return = runner.execute_action(action_named, action_class_ref, [parameter_map], custom_dir: '.')
      return action_return
    end
    
          it 'adds docset_install_path param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_install_path: 'docs/install/path'
          )
        end').runner.execute(:test)
    
            FastlaneCore::CertChecker.wwdr_certificate_installed?
      end
    
      def status_finder
    StatusFinder.new(params[:url])
  end
    
      def hub_topic
    params['hub.topic']
  end
    
      def require_enabled_api!
    head 404 unless Setting.activity_api_enabled
  end
end

    
      def update
    raise ActiveRecord::RecordNotFound if @web_subscription.nil?
    
      before_action :require_user!
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
          # This is used for duck typing with `pair` nodes which also appear as
      # `hash` elements.
      #
      # @return [false]
      def colon?
        false
      end
    
    desc 'Creates a sandbox application for simulating the Spree code in a deployed Rails app'
task :sandbox do
  Bundler.with_clean_env do
    exec('lib/sandbox.sh')
  end
end

    
            def create
          authorize! :create, Image
          @image = scope.images.new(image_params)
          if @image.save
            respond_with(@image, status: 201, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def show
          @stock_item = scope.find(params[:id])
          respond_with(@stock_item)
        end