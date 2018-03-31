
        
            def replace(index, name)
      @filters[assert_index(index)] = filter_const(name)
    end
    
            css('.bs-docs-sidenav > li').each do |node|
          link = node.at_css('a')
          name = link.content
          next if IGNORE_ENTRIES.include?(name)
    
                  # An IO::WaitReadable means there may be more IO but this
              # IO object is not ready to be read from yet. No problem,
              # we read as much as we can, so we break.
              breakable = true
            elsif e.is_a?(Errno::EAGAIN)
              # Otherwise, we just look for the EAGAIN error which should be
              # all that IO::WaitReadable does in Ruby 1.9.
              breakable = true
            end
    
              # Repackage the box
          output_name = @env.vagrantfile.config.package.name || 'package.box'
          output_path = Pathname.new(File.expand_path(output_name, FileUtils.pwd))
          box.repackage(output_path)
    
            # Otherwise, call it
        cap_host.capability(name, *argv)
    
          if(pkt.payload =~ self.sigs[k])
        matched = k
        matches = $1
      end
    
    #compileOpts = ['']
#outputDir		= system.getProperty('java.io.tmpdir')
outputDir		= 'testoutdir'
compileOpts 	= [ '-target', '1.3', '-source', '1.3', '-d', outputDir ]
    
          respond_with do |format|
        format.html do
          gon.preloads[:pods] = pods_json
          gon.unchecked_count = Pod.unchecked.count
          gon.version_failed_count = Pod.version_failed.count
          gon.error_count = Pod.check_failed.count
    
        unless user
      EmailInviter.new(email, inviter).send!
      flash[:notice] = 'invitation sent to #{email}'
    else
      flash[:notice]= 'error sending invite to #{email}'
    end
    redirect_to user_search_path, :notice => flash[:notice]
  end
    
            def validate!
          super
          if @pod_name.nil? && !@wipe_all
            # Security measure, to avoid removing the pod cache too agressively by mistake
            help! 'You should either specify a pod name or use the --all flag'
          end
        end
    
            podfile
      end
    
            def run
          print_version
          signal_end_of_output
          listen
        end
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
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
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end