
        
              #
    
            def connect(websocket, handshake)
          @connections_count += 1
          if @connections_count == 1
            message = 'Browser connected'
            message += ' over SSL/TLS' if handshake.secure?
            Jekyll.logger.info 'LiveReload:', message
          end
          websocket.send(
            JSON.dump(
              :command    => 'hello',
              :protocols  => ['http://livereload.com/protocols/official-7'],
              :serverName => 'jekyll'
            )
          )
    
            # Setup and normalize the configuration:
        #   * Create Kramdown if it doesn't exist.
        #   * Set syntax_highlighter, detecting enable_coderay and merging
        #       highlighter if none.
        #   * Merge kramdown[coderay] into syntax_highlighter_opts stripping coderay_.
        #   * Make sure `syntax_highlighter_opts` exists.
    
          if @actions_requiring_special_handling.include?(action_name)
        command_return = run_action_requiring_special_handling(
          command: command,
          parameter_map: parameter_map,
          action_return_type: action_class_ref.return_type
        )
        return command_return
      end
    
          File.write(new_path, '1')
      false
    end
    
          it 'allows you to specify your own tag' do
        tag = '2.0.0'
    
          it 'works with :path param' do
        result = Fastlane::FastFile.new.parse('lane :test do
          create_keychain ({
            path: '/tmp/test.keychain',
            password: 'testpassword',
            default_keychain: true,
            unlock: true,
            timeout: 600,
            lock_when_sleeps: true,
            lock_after_timeout: true,
            add_to_search_list: false,
          })
        end').runner.execute(:test)
        expect(result.size).to eq(4)
        expect(result[0]).to eq('security create-keychain -p testpassword /tmp/test.keychain')
    
          it 'handles the extension parameter correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.rb')
      end
    
          it 'works given a path to the directory containing compile_commands.json' do
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint'
            )
          end').runner.execute(:test)
    
              result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              strict: true,
              executable: '#{CUSTOM_EXECUTABLE_NAME}'
            )
          end').runner.execute(:test)
    
          context 'without error_callback' do
        it 'raise shell_error' do
          allow(FastlaneCore::UI).to receive(:shell_error!)
          expect_command('exit 1', exitstatus: 1)
          Fastlane::Actions.sh('exit 1')
    
          if conflicting_options
        conflicting_options.each do |conflicting_option_key|
          UI.user_error!('Conflicting option key must be a symbol') unless conflicting_option_key.kind_of?(Symbol)
        end
      end
    
        # wrap in double quotes if contains space
    if str =~ /\s/
      # double quotes have to be doubled if will be quoted
      str.gsub!(''', '''')
      return ''' + str + '''
    else
      return str
    end
  end
  module_function :shellescape
end

    
              expect(value).to eq(array.shelljoin)
        end
    
    if git.modified_files.include?('snapshot/lib/assets/SnapshotHelper.swift')
  warn('You modified `SnapshotHelper.swift`, make sure to update the version number at the bottom of the file to notify users about the new helper file.')
end
    
    module Docs
  class EntryIndex
    attr_reader :entries, :types
    
        def version
      context[:version]
    end
    
        def assert_index(index)
      i = index.is_a?(Integer) ? index : @filters.index(filter_const(index))
      raise 'No such filter to insert: #{index}' unless i
      i
    end
  end
end

    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
        delegate :empty?, :blank?, to: :pages
    
        def url
      @url ||= URL.parse request.base_url
    end
    
        def pipeline_context(response)
      options.merge url: response.url
    end
    
        def request_all(urls, &block)
      if options[:rate_limit]
        if @@rate_limiter
          @@rate_limiter.limit = options[:rate_limit]
        else
          @@rate_limiter = RateLimiter.new(options[:rate_limit])
          Typhoeus.before(&@@rate_limiter.to_proc)
        end
      end
    
            subtitle = at_css('.hero-subtitle').try(:content)
        breadcrumbs = css('.breadcrumbs li').map(&:content)[2..-2]
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
    module Admin
  class EmailDomainBlocksController < BaseController
    before_action :set_email_domain_block, only: [:show, :destroy]
    
      def maxheight_or_default
    params[:maxheight].present? ? params[:maxheight].to_i : nil
  end
end

    
      def update
    response, status = process_push_request
    render plain: response, status: status
  end
    
      def update
    if verify_payload?
      process_salmon
      head 202
    elsif payload.present?
      render plain: signature_verification_failure_reason, status: 401
    else
      head 400
    end
  end
    
      def require_enabled_api!
    head 404 unless Setting.activity_api_enabled
  end
end

    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
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