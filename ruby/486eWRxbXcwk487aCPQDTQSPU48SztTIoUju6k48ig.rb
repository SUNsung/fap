
        
          def import
    if params[:file]
      file = params[:file]
      content = JSON.parse(file.read)
      new_credentials = content.map do |hash|
        current_user.user_credentials.build(hash.slice('credential_name', 'credential_value', 'mode'))
      end
    
      # if rss_url already in existing opml file, use that; otherwise, do a lookup
  rss_url = nil
  existing_blog = xml.xpath('//outline[@htmlUrl='#{web_url}']').first if xml
  if existing_blog
    rss_url = existing_blog.attr('xmlUrl')
    puts '#{name}: ALREADY HAVE'
  end
    
            on roles(target_roles) do
          unless test '[ -f #{file.to_s.shellescape} ]'
            info 'Uploading #{prerequisite_file} to #{file}'
            upload! File.open(prerequisite_file), file
          end
        end
      end
    end
    
        # @abstract
    #
    # Identify the SHA of the commit that will be deployed.  This will most likely involve SshKit's capture method.
    #
    # @return void
    #
    def fetch_revision
      raise NotImplementedError, 'Your SCM strategy module should provide a #fetch_revision method'
    end
  end
end

    
      it 'overrides the rake method, but still prints the rake version' do
    out, _err = capture_io do
      flags '--version', '-V'
    end
    expect(out).to match(/\bCapistrano Version\b/)
    expect(out).to match(/\b#{Capistrano::VERSION}\b/)
    expect(out).to match(/\bRake Version\b/)
    expect(out).to match(/\b#{Rake::VERSION}\b/)
  end
    
      context 'expands invalid text inputs' do
    it 'finds selectors' do
      list = @inputs_list.map { |input| '#{input}:invalid' }
      list = list.join(', ')
      ruleset = 'content: #{list};'