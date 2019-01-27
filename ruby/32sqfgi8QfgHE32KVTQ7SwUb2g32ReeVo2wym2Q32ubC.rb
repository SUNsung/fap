
        
            def links
      context[:links]
    end
    
        def initialize
      @pages = {}
    end
    
            subtitle = at_css('.hero-subtitle').try(:content)
        breadcrumbs = css('.breadcrumbs li').map(&:content)[2..-2]
    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
            private
    
            def shipment_params
          if params[:shipment] && !params[:shipment].empty?
            params.require(:shipment).permit(permitted_shipment_attributes)
          else
            {}
          end
        end
    
            def create
          authorize! :create, Store
          @store = Store.new(store_params)
          @store.code = params[:store][:code]
          if @store.save
            respond_with(@store, status: 201, default_template: :show)
          else
            invalid_resource!(@store)
          end
        end
    
        scripts = {}
    
      def to_s_fullversion()
    # iteration (PORTREVISION on FreeBSD) shall be appended only(?) if non-zero.
    # https://www.freebsd.org/doc/en/books/porters-handbook/makefile-naming.html
    (iteration and (iteration.to_i > 0)) ?  '#{version}_#{iteration}' : '#{version}'
  end
    
      def self.default_prefix
    npm_prefix = safesystemout('npm', 'prefix', '-g').chomp
    if npm_prefix.count('\n') > 0
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned unexpected output.'
    elsif !File.directory?(npm_prefix)
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned a non-existent directory'
    end
    logger.info('Setting default npm install prefix', :prefix => npm_prefix)
    npm_prefix
  end
    
          base = staging_path(File.join(attributes[:prefix], '#{platform.platform}/#{platform.target_version || 'default'}'))
      target = File.join(base, 'files')
      actions_script = File.join(base, 'install_actions.sh')
      ::PleaseRun::Installer.install_files(platform, target, false)
      ::PleaseRun::Installer.write_actions(platform, actions_script)
    end
    
    
    
      # Input a tarball. Compressed tarballs should be OK.
  def input(input_path)
    # use part of the filename as the package name
    self.name = File.basename(input_path).split('.').first