
        
          url 'http://swupdl.adobe.com/updates/oobe/aam20/mac/AdobeLightroom-#{version.major}.0/#{version}/setup.dmg'
  name 'Adobe Photoshop Lightroom'
  homepage 'https://www.adobe.com/products/photoshop-lightroom.html'
    
      gem.licenses      = ['MIT']
    
        def set_if_empty(key, value=nil, &block)
      set(key, value, &block) unless keys.include?(key)
    end
    
    # usage rake isolate[my-post]
desc 'Move all other posts than the one currently being worked on to a temporary stash location (stash) so regenerating the site happens much more quickly.'
task :isolate, :filename do |t, args|
  stash_dir = '#{source_dir}/#{stash_dir}'
  FileUtils.mkdir(stash_dir) unless File.exist?(stash_dir)
  Dir.glob('#{source_dir}/#{posts_dir}/*.*') do |post|
    FileUtils.mv post, stash_dir unless post.include?(args.filename)
  end
end
    
    run SinatraStaticServer

    
        def paragraphize(input)
      '<p>#{input.lstrip.rstrip.gsub(/\n\n/, '</p><p>').gsub(/\n/, '<br/>')}</p>'
    end
  end
end
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
          super
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