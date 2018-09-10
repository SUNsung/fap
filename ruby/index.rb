
        
                  return obj
        end
    
        it 'raises an InternalServerError exception on a HTTP 500 error' do
      response = double('Response', body: '<html>Server Error</html>', status: 500)
      expect do
        subject.handle_response(response)
      end.to raise_error(Spaceship::Client::InternalServerError)
    end
  end
    
        it 'allows modifications of localized values' do
      new_title = 'New Title'
      version.description['English'] = new_title
      lang = version.languages.find { |a| a['language'] == 'English' }
      expect(lang['description']['value']).to eq(new_title)
    end
    
          #   # First, stub a failing request
      #   stub_request(:get, 'https://appstoreconnect.apple.com/testflight/v2/providers/1234/apps/898536088/platforms/ios/trains').
      #     # to_return(status: 200, body: TunesStubbing.itc_read_fixture_file('build_trains_operation_failed.json'), headers: { 'Content-Type' => 'application/json' }).times(2).
      #     to_return(status: 200, body: TunesStubbing.itc_read_fixture_file('build_trains.json'), headers: { 'Content-Type' => 'application/json' })
    
          # Zips build products and moves it to output directory
      UI.message('Zipping build products')
      FastlaneCore::Helper.zip_directory(path, output_path, contents_only: true, overwrite: true, print: false)
      UI.message('Succesfully zipped build products: #{output_path}')
    end
    
            # Sometimes latest build will disappear and a different build would get selected
        # Only set build if no latest build found or if same build versions as previously fetched build
        # Issue: https://github.com/fastlane/fastlane/issues/10945
        if build.nil? || (latest_build && latest_build.train_version == build.train_version && latest_build.build_version == build.build_version)
          build = latest_build
        end
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
        def resource_params
      params.require(:account_moderation_note).permit(
        :content,
        :target_account_id
      )
    end
    
    module Admin
  class ChangeEmailsController < BaseController
    before_action :set_account
    before_action :require_local_account!
    
        def create
      authorize :status, :update?
    
      def status_finder
    StatusFinder.new(params[:url])
  end
    
          def find_product(id)
        @product = product_scope.friendly.distinct(false).find(id.to_s)
      rescue ActiveRecord::RecordNotFound
        @product = product_scope.find_by(id: id)
        not_found unless @product
      end
    
            private
    
            private
    
            def create
          authorize! :create, Image
          @image = scope.images.new(image_params)
          if @image.save
            respond_with(@image, status: 201, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end