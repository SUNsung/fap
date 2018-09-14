
        
                  def render_collection
            @collection.map do |item|
              value = value_for_collection(item, @value_method)
              text  = value_for_collection(item, @text_method)
              default_html_options = default_html_options_for_collection(item, value)
              additional_html_options = option_html_attributes(item)
    
        def render_collection(event)
      identifier = event.payload[:identifier] || 'templates'
    
        class DetailsKey #:nodoc:
      alias :eql? :equal?
    
    Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
    require 'benchmark/ips'
require 'pathutil'
    
      </body>
</html>
HTML
    
      Jekyll::External.require_if_present(Jekyll::External.blessed_gems) do |g, ver_constraint|
    cmd = g.split('-').last
    p.command(cmd.to_sym) do |c|
      c.syntax cmd
      c.action do
        Jekyll.logger.abort_with 'You must install the '#{g}' gem' \
          ' version #{ver_constraint} to use the 'jekyll #{cmd}' command.'
      end
    end
  end
    
          def after_background(_background)
        @in_background = nil
      end
    
      def self.source_dir; SOURCE_DIR; end
end
    
    lib = File.expand_path('lib', __dir__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'jekyll/version'
    
        def fragment_url_string?(str)
      str[0] == '#'
    end
    
        def queue(request)
      request.on_complete(&method(:handle_response))
      super
    end
    
        def error?
      code == 0 || code != 404 && code != 403 && code >= 400 && code <= 599
    end
    
            doc
      end
    end
  end
end

    
          it 'displays Float::INFINITY as Inf' do
        format('%f', Float::INFINITY).should == 'Inf'
        format('%f', -Float::INFINITY).should == '-Inf'
      end
    
          it 'converts value to Integer' do
        w = KernelSpecs::WarnInNestedCall.new
    
        # Outputs the post.date as formatted html, with hooks for CSS styling.
    #
    #  +date+ is the date object to format as HTML.
    #
    # Returns string
    def date_to_html_string(date)
      result = '<span class='month'>' + date.strftime('%b').upcase + '</span> '
      result << date.strftime('<span class='day'>%d</span> ')
      result << date.strftime('<span class='year'>%Y</span> ')
      result
    end
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
          Dir.chdir(code_path) do
        code = file.read
        @filetype = file.extname.sub('.','') if @filetype.nil?
        title = @title ? '#{@title} (#{file.basename})' : file.basename
        url = '/#{code_dir}/#{@file}'
        source = '<figure class='code'><figcaption><span>#{title}</span> <a href='#{url}'>download</a></figcaption>\n'
        source += '#{HighlightCode::highlight(code, @filetype)}</figure>'
        TemplateWrapper::safe_wrap(source)
      end
    end
  end
    
      # Used on the blog index to split posts on the <!--more--> marker
  def excerpt(input)
    if input.index(/<!--\s*more\s*-->/i)
      input.split(/<!--\s*more\s*-->/i)[0]
    else
      input
    end
  end
    
          def variants_associations
        [{ option_values: :option_type }, :default_price, :images]
      end
    
            def new; end
    
            def payment_params
          params.require(:payment).permit(permitted_payment_attributes)
        end
      end
    end
  end
end

    
            def update
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.update_attributes(return_authorization_params)
            respond_with(@return_authorization, default_template: :show)
          else
            invalid_resource!(@return_authorization)
          end
        end
    
            private
    
              if params[:stock_item].key?(:backorderable)
            @stock_item.backorderable = params[:stock_item][:backorderable]
            @stock_item.save
          end
    
    ENV['RAILS_ENV'] = 'test'
    
        def initialize(filepath)
      @filepath = filepath
    end