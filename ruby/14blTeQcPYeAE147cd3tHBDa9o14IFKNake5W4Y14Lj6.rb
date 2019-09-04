
        
        CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
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
    
            # @return [String] The path of the user project
        #         integrated by this target.
        #
        def user_project_path
          user_project.path if user_project
        end
    
        it 'adds --force-local flag for tar on Windows' do
      Executable.stubs(:which).returns('/usr/bin/tar.exe')
      status = Object.new
      status.define_singleton_method(:success?) { return true }
      Executable.expects(:popen3).with('/usr/bin/tar.exe', ['--force-local'], [], []).returns(status)
      Executable.execute_command('tar', [])
    end
  end
end

    
    def fixture_pod_target_with_specs(specs, host_requires_frameworks = false, user_build_configurations = {}, archs = [],
                                  platform = Pod::Platform.new(:ios, '6.0'), target_definitions = [],
                                  scope_suffix = nil, build_type: nil)
  build_type ||= Pod::Target::BuildType.infer_from_spec(specs.first, :host_requires_frameworks => host_requires_frameworks)
  target_definitions << fixture_target_definition if target_definitions.empty?
  target_definitions.each { |td| specs.each { |spec| td.store_pod(spec.name) } }
  file_accessors = specs.map { |spec| fixture_file_accessor(spec, platform) }
  Pod::PodTarget.new(config.sandbox, host_requires_frameworks, user_build_configurations, archs, platform, specs,
                     target_definitions, file_accessors, scope_suffix, :build_type => build_type)
end
    
            it 'can be initialized with specs, platform and whether it requires frameworks' do
          variant = PodVariant.new(@specs, [], [], @platform, @type)
          variant.specs.should == @specs
          variant.platform.should == @platform
          variant.build_type.should == @type
        end
    
              it 'sets the PODS_BUILD_DIR build variable' do
            @xcconfig.to_hash['PODS_BUILD_DIR'].should == '${BUILD_DIR}'
          end
    
          def all_paths
        [source_path, dsym_path, bcsymbolmap_paths].flatten.compact
      end
    end
  end
end

    
    # ECMA-262, section 15.1.3
    def Encode(uri, unescape)
      uriLength = uri.length;
      # We are going to pass result to %StringFromCharCodeArray
      # which does not expect any getters/setters installed
      # on the incoming array.
      result    = Array.new(uriLength);
      index = 0;
      k = -1;
      while ((k+=1) < uriLength) do
        cc1 = uri.charCodeAt(k);
        next if cc1.nil?
        if (self.send(unescape, cc1))
          result[index] = cc1;
          index += 1
        else
          if (cc1 >= 0xDC00 && cc1 <= 0xDFFF);
            throw('URI malformed')
          end
          if (cc1 < 0xD800 || cc1 > 0xDBFF)
            index = URIEncodeSingle(cc1, result, index);
          else
            k+=1;
            if (k == uriLength);
              throw('URI malformed')
            end
            cc2 = uri.charCodeAt(k);
            if (cc2 < 0xDC00 || cc2 > 0xDFFF);
              throw('URI malformed')
            end
            index = URIEncodePair(cc1, cc2, result, index);
          end
        end
      end
      # use .compact to get rid of nils from charCodeAt
      # return %StringFromCharCodeArray(result);
      # 'c' = 8 bit signed char
      # http://www.ruby-doc.org/core-1.9.3/Array.html#method-i-pack
      return result.compact.pack 'c*'
    end
  end # class << self
end # module

    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift(int, shift)
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
      test 'creating page is blocked' do
    Precious::App.set(:wiki_options, { allow_editing: false})
    post '/create', :content => 'abc', :page => 'D',
         :format             => 'markdown', :message => 'def'
    assert !last_response.ok?
    
        # Test page_header_from_content(@content)
    actual = @view.title
    assert_equal '1 & 2', actual
  end
    
        @wiki.update_page(@wiki.page('PG'), nil, nil, '다른 text', {})
    page = @wiki.page('PG')
    assert_equal '다른 text', utf8(page.raw_data)