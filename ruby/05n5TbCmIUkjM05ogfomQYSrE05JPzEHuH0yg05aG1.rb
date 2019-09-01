
        
            def not_implemented
      raise 'Not implemented.'
    end
    
      def user_ids
    [ topic.user_id, topic.last_post_user_id, *topic.featured_user_ids ]
  end
    
      def handle_spam
    if @spam
      GroupMessage.create(Group[:moderators].name,
                           :spam_post_blocked,
                           user: @user,
                           limit_once_per: 24.hours,
                           message_params: { domains: @post.linked_hosts.keys.join(', ') })
    elsif @post && errors.blank? && !skip_validations?
      SpamRule::FlagSockpuppets.new(@post).perform
    end
  end
    
          it 'removes the file from s3 on multisite' do
        test_multisite_connection('default') do
          upload = build_upload
          store.expects(:get_depth_for).with(upload.id).returns(0)
          s3_helper.expects(:s3_bucket).returns(s3_bucket).at_least_once
          upload.update!(url: '//s3-upload-bucket.s3.dualstack.us-west-1.amazonaws.com/uploads/default/original/1X/#{upload.sha1}.png')
          s3_object = stub
    
      context 'editing category' do
    
          if !shadowed_val.nil?
        setup_shadowed_methods(name, shadowed_val)
      else
        setup_methods(name)
      end
    end
  end
    
      def test_font_helper_without_suffix
    assert_match %r(url\(['']?/assets/.*eot['']?\)), @css
  end
    
          super(argv)
    ensure
      UI.print_warnings
    end
    
            def attrs
          attrs = {
            'size' => size,
            'mtime' => mtime,
          }.reject { |_k, v| v.nil? }
          return nil if attrs.empty?
          attrs.to_s
        end
      end
    
          LAUNCHSCREEN_STORYBOARD_CONTENTS_IOS_8 = <<-XML.strip_heredoc.freeze
              <?xml version='1.0' encoding='UTF-8' standalone='no'?>
              <document type='com.apple.InterfaceBuilder3.CocoaTouch.Storyboard.XIB' version='3.0' toolsVersion='13122.16' systemVersion='17A277' targetRuntime='iOS.CocoaTouch' propertyAccessControl='none' useAutolayout='YES' launchScreen='YES' useTraitCollections='YES' colorMatched='YES' initialViewController='01J-lp-oVM'>
                <dependencies>
                  <plugIn identifier='com.apple.InterfaceBuilder.IBCocoaTouchPlugin' version='13104.12'/>
                  <capability name='documents saved in the Xcode 8 format' minToolsVersion='8.0'/>
                </dependencies>
                <scenes>
                  <!--View Controller-->
                  <scene sceneID='EHf-IW-A2E'>
                    <objects>
                      <viewController id='01J-lp-oVM' sceneMemberID='viewController'>
                        <layoutGuides>
                          <viewControllerLayoutGuide type='top' id='rUq-ht-380'/>
                          <viewControllerLayoutGuide type='bottom' id='a9l-8d-mfx'/>
                        </layoutGuides>
                        <view key='view' contentMode='scaleToFill' id='Ze5-6b-2t3'>
                          <rect key='frame' x='0.0' y='0.0' width='375' height='667'/>
                          <autoresizingMask key='autoresizingMask' widthSizable='YES' heightSizable='YES'/>
                          <color key='backgroundColor' red='1' green='1' blue='1' alpha='1' colorSpace='custom' customColorSpace='sRGB'/>
                        </view>
                      </viewController>
                      <placeholder placeholderIdentifier='IBFirstResponder' id='iYj-Kq-Ea1' userLabel='First Responder' sceneMemberID='firstResponder'/>
                    </objects>
                    <point key='canvasLocation' x='53' y='375'/>
                  </scene>
                </scenes>
              </document>
      XML
    
                  <% if frame.post_context %>
              <ol start='<%=h frame.lineno + 1 %>' class='post-context'
                  id='post-<%= id %>' onclick='toggle(<%= id %>);'>
                <% frame.post_context.each do |line| %>
                <li class='post-context-line'><code><%=h line %></code></li>
                <% end %>
              </ol>
              <% end %>
              <div class='clear'></div>
            </li>
    
      task :index do
    doc = File.read('README.md')
    file = 'doc/rack-protection-readme.md'
    Dir.mkdir 'doc' unless File.directory? 'doc'
    puts 'writing #{file}'
    File.open(file, 'w') { |f| f << doc }
  end
    
    module Rack
  module Protection
    class Base
      DEFAULT_OPTIONS = {
        :reaction    => :default_reaction, :logging   => true,
        :message     => 'Forbidden',       :encryptor => Digest::SHA1,
        :session_key => 'rack.session',    :status    => 403,
        :allow_empty_referrer => true,
        :report_key           => 'protection.failed',
        :html_types           => %w[text/html application/xhtml text/xml application/xml]
      }
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end

    
          def redirect(env)
        request = Request.new(env)
        warn env, 'attack prevented by #{self.class}'
        [302, {'Content-Type' => 'text/html', 'Location' => request.path}, []]
      end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to be_nil
    expect(headers['Content-Security-Policy-Report-Only']).to eq('connect-src 'self'; default-src none; img-src 'self'; report-uri /my_amazing_csp_report_parser; script-src 'self'; style-src 'self'')
  end
    
      context 'escaping' do
    it 'escapes html entities' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => '<bar>'
      expect(body).to eq('&lt;bar&gt;')
    end