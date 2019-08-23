
        
              run_test_command('test/models/post_test.rb:4:9').tap do |output|
        assert_match 'PostTest:FirstFilter', output
        assert_match 'PostTest:SecondFilter', output
        assert_match '2 runs, 2 assertions', output
      end
    end
    
        def to_json(options = {})
      super except: [:c, :e]
    end
  end
  class CsvRenderable
    def to_csv
      'c,s,v'
    end
  end
  class TestController < ActionController::Base
    def render_simon_says
      render simon: 'foo'
    end
    
        it 'handles a large amount of output' do
      cmd = ['-e', <<-RB]
        puts File.read(#{__FILE__.inspect})
      RB
      Executable.execute_command('ruby', cmd, true).should == File.read(__FILE__)
    end
    
            # @private
        # @return [Hash<PodVariant, String>]
        #
        def scope_by_platform
          grouped_variants = group_by { |v| v.platform.name }
          if grouped_variants.all? { |set| set.variants.count == 1 }
            # => Platform name
            platform_name_proc = proc { |v| Platform.string_name(v.platform.symbolic_name).tr(' ', '') }
          else
            grouped_variants = group_by(&:platform)
            # => Platform name + SDK version
            platform_name_proc = proc { |v| v.platform.to_s.tr(' ', '') }
          end
          scope_if_necessary(grouped_variants.map(&:scope_without_suffix), &platform_name_proc)
        end
    
    module Pod
  class Installer
    class Analyzer
      describe PodVariant do
        before do
          @specs = [stub('Spec'), stub('Spec/Foo')]
          @testspecs = [stub('Spec/Tests')]
          @appspecs = [stub('Spec/App')]
          @platform = Platform.ios
          @type = Target::BuildType.dynamic_framework
        end
    
            it 'returns :framework as product type' do
          @target.product_type.should == :framework
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
    
          alias eql? ==
    
              if pods_by_state
            {
              :added => :added,
              :changed => :changed,
              :removed => :deleted,
              :unchanged => :unchanged,
            }.each do |state, spec_state|
              Array(pods_by_state[state]).each do |name|
                add_name(name, spec_state)
              end
            end
          end
        end
    
          it 'Does not render variant when no variants published' do
        html_variant = create(:html_variant, published: false, approved: true)
        get article.path + '?variant_version=1'
        expect(response.body).not_to include html_variant.html
      end
    
      def user_is_author?
    if record.instance_of?(Article)
      record.user_id == user.id
    else
      record.pluck(:user_id).uniq == [user.id]
    end
  end
    
        respond_to do |format|
      format.html do
        render 'user', layout: false
      end
      format.png do
        html = render_to_string('user', formats: :html, layout: false)
        redirect_to HtmlCssToImage.fetch_url(html: html, css: PNG_CSS, google_fonts: 'Roboto'), status: :found
      end
    end
  end
    
      def self.send_to_buffer(text, buffer_profile_id_code)
    client = Buffer::Client.new(ApplicationConfig['BUFFER_ACCESS_TOKEN'])
    client.create_update(
      body: {
        text:
        text,
        profile_ids: [
          buffer_profile_id_code,
        ]
      },
    )
  end
    
          now = Time.current
      @user.onboarding_package_requested_again = true if @user.onboarding_package_requested
      @user.onboarding_package_requested = true
      @user.onboarding_package_form_submmitted_at = now
      @user.personal_data_updated_at = now
      @user.shipping_validated_at = now if user_params[:shipping_validated] == '1'
      if @user.save!
        format.html { redirect_to '/freestickers/edit' }
        format.json { render :show, status: :ok, location: @user }
      else
        format.html { render :edit }
        format.json { render json: @user.errors, status: :unprocessable_entity }
      end
    end
  end
    
        context 'converter' do
      it 'does not build Virtus::Attribute multiple times' do
        subject.params do
          requires :something, type: Array[String]
        end
        subject.get do
        end
    
        def write(header)
      @cookies.select { |key, _value| @send_cookies[key] == true }.each do |name, value|
        cookie_value = value.is_a?(Hash) ? value : { value: value }
        Rack::Utils.set_cookie_header! header, name, cookie_value
      end
    end
    
          # Fetch our current inheritable settings, which are inherited by
      # nested scopes but not shared across siblings.
      def inheritable_setting
        @inheritable_setting ||= Grape::Util::InheritableSetting.new.tap { |new_settings| new_settings.inherit_from top_level_setting }
      end
    
              presenter = found_code[2] if found_code
        end