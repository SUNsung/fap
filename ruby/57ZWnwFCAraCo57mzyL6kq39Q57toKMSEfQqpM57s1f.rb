
        
          [name, full_name]
end
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
    module Homebrew
  def list
    # Use of exec means we don't explicitly exit
    list_unbrewed if ARGV.flag? '--unbrewed'
    
      def add(reporter)
    @reporters << reporter
    report = reporter.report.delete_if { |k,v| v.empty? }
    @hash.update(report) { |_key, oldval, newval| oldval.concat(newval) }
  end
    
      def python(_options = {}, &block)
    opoo 'Formula#python is deprecated and will go away shortly.'
    block.call if block_given?
    PythonRequirement.new
  end
  alias_method :python2, :python
  alias_method :python3, :python
end

    
    class Devise::OmniauthCallbacksController < DeviseController
  prepend_before_action { request.env['devise.skip_timeout'] = true }
    
          def _devise_route_context
        @_devise_route_context ||= send(Devise.available_router_name)
      end
    end
  end
end

    
          protected
    
      def meta
    object.file.meta
  end
end

    
      def type
    'Emoji'
  end
    
      private
    
        def log_http_get_files(files, from, cached = false)
      return if files.empty?
      s = '  #{'CACHED ' if cached}GET #{files.length} files from #{from} #{files * ' '}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
            private
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end