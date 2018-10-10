
        
        class TestApp < Rails::Application
  config.root = File.dirname(__FILE__)
  config.session_store :cookie_store, key: 'cookie_store_key'
  secrets.secret_token    = 'secret_token'
  secrets.secret_key_base = 'secret_key_base'
  config.eager_load = false
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
    # Declares a dependency to the git repo of CocoaPods gem. This declaration is
# compatible with the local git repos feature of Bundler.
#
def cp_gem(name, repo_name, branch = 'master', path: false)
  return gem name if SKIP_UNRELEASED_VERSIONS
  opts = if path
           { :path => '../#{repo_name}' }
         else
           url = 'https://github.com/CocoaPods/#{repo_name}.git'
           { :git => url, :branch => branch }
         end
  gem name, opts
end
    
    end
    
          # Wraps page formatted data to Nokogiri::HTML document.
      #
      def build_document(content)
        Nokogiri::HTML::fragment(%{<div id='gollum-root'>} + content.to_s + %{</div>}, 'UTF-8')
      end
    
        # Extract the 'page' name from the file_path
    def extract_name(file_path)
      if file_path[-1, 1] == '/'
        return nil
      end
    
      def for_each_gem
    SPREE_GEMS.each do |gem_name|
      yield 'pkg/spree_#{gem_name}-#{version}.gem'
    end
    yield 'pkg/spree-#{version}.gem'
  end
    
          def load_user_roles
        @current_user_roles = @current_api_user ? @current_api_user.spree_roles.pluck(:name) : []
      end
    
            private
    
            def update
          @option_value = scope.accessible_by(current_ability, :update).find(params[:id])
          if @option_value.update_attributes(option_value_params)
            render :show
          else
            invalid_resource!(@option_value)
          end
        end