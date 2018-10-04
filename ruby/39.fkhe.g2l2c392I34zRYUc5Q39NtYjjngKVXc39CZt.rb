
        
              def footer
        if @footer.nil?
          if page = @page.footer
            @footer = page.text_data
          else
            @footer = false
          end
        end
        @footer
      end
    
      File.write('lib/#{name}.rb', old_file)
    
        get %r{/(.+?)/([0-9a-f]{40})} do
      file_path = params[:captures][0]
      version   = params[:captures][1]
      wikip     = wiki_page(file_path, file_path, version)
      name      = wikip.name
      path      = wikip.path
      if page = wikip.page
        @page    = page
        @name    = name
        @content = page.formatted_data
        @version = version
        @bar_side = wikip.wiki.bar_side
        mustache :page
      elsif file = wikip.wiki.file('#{file_path}', version, true)
        show_file(file)
      else
        halt 404
      end
    end