
        
          desc 'Generate generated pages and publish to GitHub Pages'
  task :publish => :generated_pages do
    puts 'GitHub Pages now compiles our docs site on every push to the `master` branch. Cool, huh?'
    exit 1
  end
    
          context 'include existing file above you' do
        setup do
          @content = <<~CONTENT
            ---
            title: higher file
            ---
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
              unless method_called_ever?(body_node, :go_resource)
            # processed_source.ast is passed instead of body_node because `require` would be outside body_node
            find_method_with_args(processed_source.ast, :require, 'language/go') do
              problem 'require \'language/go\' is unnecessary unless using `go_resource`s'
            end
          end
    
        def cat
      version.to_sym
    end
    
      it 'prints the file used to cache the Cask' do
    transmission_location = CurlDownloadStrategy.new(
      local_transmission.url.to_s, local_transmission.token, local_transmission.version,
      cache: Cask::Cache.path, **local_transmission.url.specs
    ).cached_location
    caffeine_location = CurlDownloadStrategy.new(
      local_caffeine.url.to_s, local_caffeine.token, local_caffeine.version,
      cache: Cask::Cache.path, **local_caffeine.url.specs
    ).cached_location
    
            errors
      end
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
      before do
    allow(machine).to receive(:communicate).and_return(communicator)
  end
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
            # This is a special pseudo-state so that we don't set the
        # NOT_CREATED_ID while we're setting up the machine. This avoids
        # clearing the data dir.
        state_id = :preparing if @machine.id == 'preparing'
    
          expect { subject.usable?(true) }.
        to raise_error(Vagrant::Errors::VirtualBoxInvalidVersion)
    end
  end
    
            opts = OptionParser.new do |o|
          o.banner = 'Usage: vagrant global-status'
          o.separator ''
          o.on('--prune', 'Prune invalid entries.') do |p|
            options[:prune] = true
          end
        end
    
        target_account = ActivityPub::FetchRemoteAccountService.new.call(target_uri)
    
      context 'when a matching undo has been received first' do
    let(:undo_json) do
      {
        '@context': 'https://www.w3.org/ns/activitystreams',
        id: 'bar',
        type: 'Undo',
        actor: ActivityPub::TagManager.instance.uri_for(sender),
        object: json,
      }.with_indifferent_access
    end
    
          it 'does not create anything' do
        expect(sender.statuses.count).to eq 0
      end
    end
  end
end

    
    version = ['', 'ext/etc/'].find do |dir|
  begin
    break File.open(File.expand_path('../#{dir}/etc.c', __FILE__)) do |f|
      f.gets '\n#define RUBY_ETC_VERSION '
      f.gets[/'(.+)'/, 1]
    end
  rescue
    next
  end
end
    
        ScratchPad.record []
    while true
      begin
        ScratchPad << enum.next
      rescue StopIteration
        break
      end
    end
    
            it 'does not decrement pos' do
          @gz.ungetbyte nil
          @gz.pos.should == 0
        end
      end
    end
  end
    
          it 'makes eof? false' do
        @gz.ungetc 'x'
        @gz.eof?.should be_false
      end
    end
    
          # Generates and saves the Info.plist to the given path.
      #
      # @param  [Pathname] path
      #         the path where the prefix header should be stored.
      #
      # @return [void]
      #
      def save_as(path)
        contents = generate
        path.open('w') do |f|
          f.write(contents)
        end
      end
    
    module Pod
  class Installer
    class Analyzer
      # Collects all {PodVariant}.
      class PodVariantSet
        # @return [Array<PodVariant>] the different variants within this set.
        #
        attr_reader :variants
    
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
    
          def ==(other)
        if other.class == self.class
          other.source_path == @source_path && other.dsym_path == @dsym_path && other.bcsymbolmap_paths == @bcsymbolmap_paths
        else
          false
        end
      end
    
            # @return [Array<Project>] projects
        #         The list project to write.
        #
        attr_reader :projects
    
            # @return [Array<PodTarget>] pod_targets
        #         Array of pod targets this project includes.
        #
        attr_reader :pod_targets
    
          # @return [String] Wraps a string taking into account the width of the
      # terminal and an option indent. Adapted from
      # https://macromates.com/blog/2006/wrapping-text-with-regular-expressions/
      #
      # @param [String] string  The string to wrap
      #
      # @param [String] indent  The string to use to indent the result.
      #
      # @return [String]        The formatted string.
      #
      # @note If CocoaPods is not being run in a terminal or the width of the
      # terminal is too small a width of 80 is assumed.
      #
      def wrap_string(string, indent = 0)
        if disable_wrap
          (' ' * indent) + string
        else
          first_space = ' ' * indent
          indented = CLAide::Command::Banner::TextWrapper.wrap_with_indent(string, indent, 9999)
          first_space + indented
        end
      end
    end
  end
  UI = UserInterface
    
          private
    
    desc 'Create a release build and push to rubygems'
task :release => :build do
  unless `git branch` =~ /^\* master$/
    puts 'You must be on the master branch to release!'
    exit!
  end
  sh 'git commit --allow-empty -a -m 'Release #{version}''
  sh 'git pull --rebase origin master'
  sh 'git tag v#{version}'
  sh 'git push origin master'
  sh 'git push origin v#{version}'
  sh 'gem push pkg/#{name}-#{version}.gem'
end
    
    # Read command line options into `options` hash
begin
  opts.parse!
rescue OptionParser::InvalidOption
  puts 'gollum: #{$!.message}'
  puts 'gollum: try 'gollum --help' for more information'
  exit
end
    
        def reset
      preferences.each do |name, _value|
        set_preference name, preference_default(name)
      end
    end
    
            def self.create_inventory_units_from_order_and_params(order, inventory_unit_params)
          inventory_unit_params.each_with_object([]) do |inventory_unit_param, inventory_units|
            ensure_variant_id_from_params(inventory_unit_param)
            existing = inventory_units.detect { |unit| unit.variant_id == inventory_unit_param[:variant_id] }
            if existing
              existing.quantity += 1
            else
              line_item = order.line_items.detect { |ln| ln.variant_id == inventory_unit_param[:variant_id] }
              inventory_units << InventoryUnit.new(line_item: line_item, order_id: order.id, variant: line_item.variant, quantity: 1)
            end
          end
        end
    
            def option_type_params
          params.require(:option_type).permit(permitted_option_type_attributes)
        end
      end
    end
  end
end

    
            def destroy
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :destroy).find(params[:id])
          @return_authorization.destroy
          respond_with(@return_authorization, status: 204)
        end
    
    # The project root directory
$root = ::File.dirname(__FILE__)
    
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