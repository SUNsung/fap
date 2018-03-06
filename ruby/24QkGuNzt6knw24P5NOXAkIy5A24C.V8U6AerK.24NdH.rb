
        
        require 'json'
require 'open-uri'
    
          new_theme_name = args.join('_')
      theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
      if theme.path.exist?
        Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.'
      end
    
        sh 'gem build spree.gemspec'
    mv 'spree-#{version}.gem', pkgdir
  end
    
            def show
          @stock_movement = scope.find(params[:id])
          respond_with(@stock_movement)
        end