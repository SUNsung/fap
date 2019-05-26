
        
              it 'returns an active nav link with menu when on a child page' do
        stub(self).current_page?('/things') { false }
        stub(self).current_page?('/things/stuff') { true }
        nav = nav_link('Things', '/things') { nav_link('Stuff', '/things/stuff') }
        expect(nav).to be_html_safe
        a0 = Nokogiri(nav).at('li.dropdown.dropdown-hover.active > a[href='/things']')
        expect(a0).to be_a Nokogiri::XML::Element
        expect(a0.text.strip).to eq('Things')
        a1 = Nokogiri(nav).at('li.dropdown.dropdown-hover.active > li:not(.active) > a[href='/things/stuff']')
        expect(a1).to be_a Nokogiri::XML::Element
        expect(a1.text.strip).to eq('Stuff')
      end
    end
  end
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
      let :new_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title', 'hidden' => true }
    }
  end
    
      describe '#check' do
    it 'should not emit events on its first run' do
      expect { @checker.check }.to change { Event.count }.by(0)
      expect(@checker.memory[:last_event]).to eq '2014-04-17T10:25:31.000+02:00'
    end
    it 'should check that initial run creates an event' do
      @checker.memory[:last_event] = '2014-04-17T10:25:31.000+02:00'
      expect { @checker.check }.to change { Event.count }.by(1)
    end
  end
    
          if new_email != @user.email
        @user.update!(
          unconfirmed_email: new_email,
          # Regenerate the confirmation token:
          confirmation_token: nil
        )
    
      def maxheight_or_default
    params[:maxheight].present? ? params[:maxheight].to_i : nil
  end
end

    
      before_action :require_user!
    
      def set_user_activity
    return unless user_needs_sign_in_update?
    current_user.update_tracked_fields!(request)
  end
    
    desc 'generate documentation'
task :doc => 'doc:all'
    
          def warn(env, message)
        return unless options[:logging]
        l = options[:logger] || env['rack.logger'] || ::Logger.new(env['rack.errors'])
        l.warn(message)
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS and others
    # Supported browsers:: Firefox 23+, Safari 7+, Chrome 25+, Opera 15+
    #
    # Description:: Content Security Policy, a mechanism web applications
    #               can use to mitigate a broad class of content injection
    #               vulnerabilities, such as cross-site scripting (XSS).
    #               Content Security Policy is a declarative policy that lets
    #               the authors (or server administrators) of a web application
    #               inform the client about the sources from which the
    #               application expects to load resources.
    #
    # More info::   W3C CSP Level 1 : https://www.w3.org/TR/CSP1/ (deprecated)
    #               W3C CSP Level 2 : https://www.w3.org/TR/CSP2/ (current)
    #               W3C CSP Level 3 : https://www.w3.org/TR/CSP3/ (draft)
    #               https://developer.mozilla.org/en-US/docs/Web/Security/CSP
    #               http://caniuse.com/#search=ContentSecurityPolicy
    #               http://content-security-policy.com/
    #               https://securityheaders.io
    #               https://scotthelme.co.uk/csp-cheat-sheet/
    #               http://www.html5rocks.com/en/tutorials/security/content-security-policy/
    #
    # Sets the 'Content-Security-Policy[-Report-Only]' header.
    #
    # Options: ContentSecurityPolicy configuration is a complex topic with
    #          several levels of support that has evolved over time.
    #          See the W3C documentation and the links in the more info
    #          section for CSP usage examples and best practices. The
    #          CSP3 directives in the 'NO_ARG_DIRECTIVES' constant need to be
    #          presented in the options hash with a boolean 'true' in order
    #          to be used in a policy.
    #
    class ContentSecurityPolicy < Base
      default_options default_src: :none, script_src: ''self'',
                      img_src: ''self'', style_src: ''self'',
                      connect_src: ''self'', report_only: false
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to eq('block-all_mixed_content; connect-src 'self'; default-src none; disown-opener; img-src 'self'; script-src 'self'; style-src 'self'; upgrade-insecure_requests')
  end
    
          # Calls the given block for each `when` node in the `case` statement.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_when
        return when_branches.to_enum(__method__) unless block_given?
    
          # The body of the method definition.
      #
      # @note this can be either a `begin` node, if the method body contains
      #       multiple expressions, or any other node, if it contains a single
      #       expression.
      #
      # @return [Node] the body of the method definition
      def body
        node_parts[0]
      end
    
          # Returns the value of this `hash` element.
      #
      # @note For keyword splats, this returns the whole node
      #
      # @return [Node] the value of the hash element
      def value
        node_parts[1]
      end
    
    module RuboCop
  # Handles caching of configurations and association of inspected
  # ruby files to configurations.
  class ConfigStore
    def initialize
      # @options_config stores a config that is specified in the command line.
      # This takes precedence over configs located in any directories
      @options_config = nil
    
            def declaration_with_comment(node)
          buffer = processed_source.buffer
          begin_pos = get_source_range(node, comments_as_separators).begin_pos
          end_line = buffer.line_for_position(node.loc.expression.end_pos)
          end_pos = buffer.line_range(end_line).end_pos
          Parser::Source::Range.new(buffer, begin_pos, end_pos)
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

    
            return left_shift(b[0], 24) |
            left_shift(b[1], 16) |
            left_shift(b[2], 8) |
            b[3] & 0xFF
      end
    
        assert_match /Delete this Page/, last_response.body, ''Delete this Page' link is blocked in page template'
    assert_match /New/,              last_response.body, ''New' button is blocked in page template'
    assert_match /Upload/,           last_response.body, ''Upload' link is blocked in page template'
    assert_match /Rename/,           last_response.body, ''Rename' link is blocked in page template'
    assert_match /Edit/,             last_response.body, ''Edit' link is blocked in page template'
    
        assert last_response.ok?
    assert_match /meta name='robots' content='noindex, nofollow'/, last_response.body
  end
    
    context 'Precious::Helpers' do
  include Precious::Helpers
    
      test 'extract destination file name in case of path renaming' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'newname.md', view.extract_renamed_path_destination('oldname.md => newname.md')
    assert_equal 'newDirectoryName/fileName.md', view.extract_renamed_path_destination('{oldDirectoryName => newDirectoryName}/fileName.md')
  end
    
      test 'h1 title sanitizes correctly' do
    title = 'H1'
    @wiki.write_page(title, :markdown, '# 1 & 2 <script>alert('js')</script>' + '\n # 3', commit_details)
    page = @wiki.page(title)
    
        # TODO: Remove to_url once write_page changes are merged.
    @wiki.write_page('ééééé'.to_url, :markdown, '한글 text', commit_details)
    page = @wiki.page('eeeee')
    assert_equal '한글 text', utf8(page.raw_data)
  end
    
    # external
require 'github/markup'
require 'sanitize'
    
      # Full error reports are disabled and caching is turned on.
  config.consider_all_requests_local       = false
  config.action_controller.perform_caching = true