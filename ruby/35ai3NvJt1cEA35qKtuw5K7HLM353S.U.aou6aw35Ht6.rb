
        
                default_connectors = {
          words_connector: ', ',
          two_words_connector: ' and ',
          last_word_connector: ', and '
        }
        if defined?(I18n)
          i18n_connectors = I18n.translate(:'support.array', locale: options[:locale], default: {})
          default_connectors.merge!(i18n_connectors)
        end
        options = default_connectors.merge!(options)
    
              def render_collection
            @collection.map do |item|
              value = value_for_collection(item, @value_method)
              text  = value_for_collection(item, @text_method)
              default_html_options = default_html_options_for_collection(item, value)
              additional_html_options = option_html_attributes(item)
    
          def _find_all(path, prefixes, args, outside_app)
        prefixes = [prefixes] if String === prefixes
        prefixes.each do |prefix|
          paths.each do |resolver|
            if outside_app
              templates = resolver.find_all_anywhere(path, prefix, *args)
            else
              templates = resolver.find_all(path, prefix, *args)
            end
            return templates unless templates.empty?
          end
        end
        []
      end
    
        initializer 'action_view.default_enforce_utf8' do |app|
      ActiveSupport.on_load(:action_view) do
        default_enforce_utf8 = app.config.action_view.delete(:default_enforce_utf8)
        unless default_enforce_utf8.nil?
          ActionView::Helpers::FormTagHelper.default_enforce_utf8 = default_enforce_utf8
        end
      end
    end
    
        # Main render entry point shared by Action View and Action Controller.
    def render(context, options)
      if options.key?(:partial)
        render_partial(context, options)
      else
        render_template(context, options)
      end
    end
    
          def perform(start_id, stop_id)
        status_sql = Build
          .where('ci_builds.commit_id = ci_stages.pipeline_id')
          .where('ci_builds.stage = ci_stages.name')
          .status_sql
    
              def valid?
            nonzero? && utf8?
          end
    
            def valid?
          @name.present?
        end
      end
    end
  end
end

    
              entry :untracked, Entry::Boolean,
            description: 'Cache all untracked files.'
    
        def stylesheets_path
      File.join assets_path, 'stylesheets'
    end
    
        # change Microsoft filters to Sass calling convention
    def replace_ms_filters(file)
      log_transform
      file.gsub(
          /filter: e\(%\('progid:DXImageTransform.Microsoft.gradient\(startColorstr='%d', endColorstr='%d', GradientType=(\d)\)',argb\(([\-$\w]+)\),argb\(([\-$\w]+)\)\)\);/,
          %Q(filter: progid:DXImageTransform.Microsoft.gradient(startColorstr='\#{ie-hex-str(\\2)}', endColorstr='\#{ie-hex-str(\\3)}', GradientType=\\1);)
      )
    end
    
    
    def get_file(url)
      uri = URI(url)
      cache_path = './#@cache_path#{uri.path}#{uri.query.tr('?&=', '-') if uri.query}'
      FileUtils.mkdir_p File.dirname(cache_path)
      if File.exists?(cache_path)
        log_http_get_file url, true
        File.read(cache_path, mode: 'rb')
      else
        log_http_get_file url, false
        content = open(url).read
        File.open(cache_path, 'wb') { |f| f.write content }
        content
      end
    end
    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
      def confirm_on_page(page_name)
    if page_name == 'my profile page'
      expect(page).to have_path_in([person_path(@me.person), user_profile_path(@me.username)])
    else
      expect(page).to have_path(path_to(page_name))
    end
  end
end