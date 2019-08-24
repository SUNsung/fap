
        
              desc 'Get the list of the available template' do
        detail 'This feature was introduced in GitLab #{gitlab_version}.'
        success Entities::TemplatesList
      end
      params do
        use :pagination
      end
      get 'templates/#{template_type}' do
        templates = ::Kaminari.paginate_array(TemplateFinder.build(template_type, nil).execute)
        present paginate(templates), with: Entities::TemplatesList
      end
    
          def decoded
        secret =
          case options.algorithm
          when *%w[RS256 RS384 RS512]
            OpenSSL::PKey::RSA.new(options.secret).public_key
          when *%w[ES256 ES384 ES512]
            OpenSSL::PKey::EC.new(options.secret).tap { |key| key.private_key = nil }
          when *%w(HS256 HS384 HS512)
            options.secret
          else
            raise NotImplementedError, 'Unsupported algorithm: #{options.algorithm}'
          end
    
          diff_file = subject.diff_files.find { |file| file.new_path == stub_path }
    
        def to_a
      @filters.dup
    end
    
        def parse_as_fragment
      Nokogiri::HTML.fragment @content, 'UTF-8'
    end
  end
end

    
            title = at_css('h1').content.strip
        if root_page?
          at_css('h1').content = 'Angular 2 Documentation'
        elsif title == 'Index'
          at_css('h1').content = result[:entries].first.name
        elsif title == 'Angular'
          at_css('h1').content = slug.split('/').last.gsub('-', ' ')
        elsif at_css('.breadcrumbs') && title != result[:entries].first.name
          at_css('h1').content = result[:entries].first.name
        end
    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
            def to_s(states: %i(added deleted changed unchanged))
          lines(states).join('\n')
        end
    
                # support user custom paths of Pods group and xcconfigs files.
            group_path = Pathname.new(group.real_path)
            xcconfig_path = Pathname.new(pod_bundle.xcconfig_path(config.name))
            path = xcconfig_path.relative_path_from(group_path)
    
    # It is very likely that we'll need these and as some of those paths will atm
# result in a I18n deprecation warning, we load those here now so that we can
# get rid of that warning.
require 'active_support/core_ext/string/strip'
require 'active_support/core_ext/string/inflections'
require 'active_support/core_ext/array/conversions'
# TODO: check what this actually does by the time we're going to add support for
# other locales.
require 'i18n'
if I18n.respond_to?(:enforce_available_locales=)
  I18n.enforce_available_locales = false
end
    
        before do
      @sut.any_instance.stubs(:configure_template)
    end
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end