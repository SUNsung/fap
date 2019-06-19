
        
            all_assertions do |a|
      [ints, floats].each do |values|
        values.combination(2).to_a.product(values).each do |(from, to), search|
          check_bsearch_values(from..to, search, a)
          check_bsearch_values(from...to, search, a)
        end
      end
    end
  end
    
      def test_popenv_r_enc_enc_in_opt2
    IO.popen([EnvUtil.rubybin, '-e', 'putc 0xa1'], 'r', external_encoding: 'shift_jis', internal_encoding: 'euc-jp') {|f|
      assert_equal(Encoding::Shift_JIS, f.external_encoding)
      assert_equal(Encoding::EUC_JP, f.internal_encoding)
      s = f.read
      assert_equal(Encoding::EUC_JP, s.encoding)
      assert_equal('\x8e\xa1'.force_encoding('euc-jp'), s)
    }
  end
    
      _                                                     UScore
  '/*NULL*/'                                            NULL
  empty?
  eql?
  respond_to?                                           Respond_to
  respond_to_missing?                                   Respond_to_missing
  <IFUNC>
  <CFUNC>
  core#set_method_alias
  core#set_variable_alias
  core#undef_method
  core#define_method
  core#define_singleton_method
  core#set_postexe
  core#hash_merge_ptr
  core#hash_merge_kwd
  core#raise
    
              unless task = @tasks.shift
            worker.quit
            return nil
          end
          if @options[:separate] and not bang
            worker.quit
            worker = launch_worker
          end
          worker.run(task, type)
          @test_count += 1
    
      caveats <<~EOS
    Installation or Uninstallation may fail with Exit Code 19 (Conflicting Processes running) if Browsers, Safari Notification Service or SIMBL Services (e.g. Flashlight) are running or Adobe Creative Cloud or any other Adobe Products are already installed. See Logs in /Library/Logs/Adobe/Installers if Installation or Uninstallation fails, to identifify the conflicting processes.
  EOS
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
    
      class ImageTag < Liquid::Tag
    @img = nil
    
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