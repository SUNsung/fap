
        
        class Formula
  include FormulaCompat
  extend FormulaCompat
    
      def to_str
    @paths.join(File::PATH_SEPARATOR)
  end
  alias to_s to_str
    
        ff = if ARGV.named.empty?
      Formula.installed.sort
    else
      ARGV.resolved_formulae.sort
    end
    
        def assets_path
      @assets_path ||= File.join gem_path, 'assets'
    end
    
      def initialize(repo: 'twbs/bootstrap', branch: 'master', save_to: {}, cache_path: 'tmp/converter-cache-bootstrap')
    @logger     = Logger.new
    @repo       = repo
    @branch     = branch || 'master'
    @branch_sha = get_branch_sha
    @cache_path = cache_path
    @repo_url   = 'https://github.com/#@repo'
    @save_to    = {
        js:    'assets/javascripts/bootstrap',
        scss:  'assets/stylesheets/bootstrap',
        fonts: 'assets/fonts/bootstrap'}.merge(save_to)
  end
    
        def replace_all(file, regex, replacement = nil, &block)
      log_transform regex, replacement
      new_file = file.gsub(regex, replacement, &block)
      raise 'replace_all #{regex}, #{replacement} NO MATCH' if file == new_file
      new_file
    end
    
      # Disable Rails's static asset server (Apache or nginx will already do this).
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
    
        # Checks that the git version is at least 1.8.5
    #
    # @raise If the git version is older than 1.8.5
    #
    # @return [void]
    #
    def self.verify_minimum_git_version!
      if git_version < Gem::Version.new('1.8.5')
        raise Informative, 'You need at least git version 1.8.5 to use CocoaPods'
      end
    end
    
            def address_params
          params.require(:address).permit(permitted_address_attributes)
        end
    
            def destroy
          authorize! :destroy, @product
          @product.destroy
          respond_with(@product, status: 204)
        end
    
              @properties = if params[:ids]
                          @properties.where(id: params[:ids].split(',').flatten)
                        else
                          @properties.ransack(params[:q]).result
                        end
    
            def show
          @state = scope.find(params[:id])
          respond_with(@state)
        end