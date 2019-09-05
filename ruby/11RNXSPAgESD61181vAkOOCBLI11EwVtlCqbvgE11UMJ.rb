
        
            def skip_up_to_date?(screenshot)
      if !screenshot.outdated? && Frameit.config[:resume]
        UI.message('Skipping framing of screenshot #{screenshot.path} because its framed file seems up-to-date.')
        return true
      end
      false
    end
    
        context 'lazy loading attribute' do
      let(:build) { Spaceship::TestFlight::Build.new('bundleId' => 1, 'appAdamId' => 1) }
      it 'loads TestInfo' do
        expect(build).to receive(:reload).once.and_call_original
        expect(build.test_info).to be_instance_of(Spaceship::TestFlight::TestInfo)
      end
      it 'loads BetaReviewInfo' do
        expect(build).to receive(:reload).once.and_call_original
        expect(build.beta_review_info).to be_instance_of(Spaceship::TestFlight::BetaReviewInfo)
      end
      it 'loads ExportCompliance' do
        expect(build).to receive(:reload).once.and_call_original
        expect(build.export_compliance).to be_instance_of(Spaceship::TestFlight::ExportCompliance)
      end
    end
    
        describe '#team_information' do
      it 'returns all available information' do
        s = subject.team_information
        expect(s['status']).to eq('active')
        expect(s['type']).to eq('Company/Organization')
        expect(s['name']).to eq('SpaceShip')
      end
    end
    
        def detect_configuration_for_archive
      extract_from_scheme = lambda do
        if self.project.workspace?
          available_schemes = self.project.workspace.schemes.reject { |k, v| v.include?('Pods/Pods.xcodeproj') }
          project_path = available_schemes[Gym.config[:scheme]]
        else
          project_path = self.project.path
        end
    
          def self.define_profile_type(params)
        profile_type = 'app-store'
        profile_type = 'ad-hoc' if params[:type] == 'adhoc'
        profile_type = 'development' if params[:type] == 'development'
        profile_type = 'enterprise' if params[:type] == 'enterprise'
    
          def on_class(node)
        _name, superclass, body = *node
        return unless superclass
        return unless superclass.loc.name.source == 'Action'
    
        it 'handles a large amount of output' do
      cmd = ['-e', <<-RB]
        puts File.read(#{__FILE__.inspect})
      RB
      Executable.execute_command('ruby', cmd, true).should == File.read(__FILE__)
    end
    
              private
    
    #-----------------------------------------------------------------------------#
    
        it 'writes the module map to the disk' do
      path = temporary_directory + 'BananaLib.modulemap'
      @pod_target.stubs(:build_type => Target::BuildType.dynamic_framework)
      @gen.save_as(path)
      path.read.should == <<-EOS.strip_heredoc
        framework module BananaLib {
          umbrella header 'BananaLib-umbrella.h'
    }
    
          it 'allows to differentiate between an exclusive variant with a specific subspec and ' \
        'an inclusive variant with the default subspecs plus a non-default subspec' do
        variants = PodVariantSet.new([
          PodVariant.new([@foo_subspec], [], [], Platform.ios),
          PodVariant.new([@root_spec, @default_subspec, @foo_subspec], [], [], Platform.ios),
        ])
        variants.scope_suffixes.values.should == %w(Foo .default-Foo)
      end
    
          def ==(other)
        if other.class == self.class
          other.source_path == @source_path && other.dsym_path == @dsym_path && other.bcsymbolmap_paths == @bcsymbolmap_paths
        else
          false
        end
      end
    
    RSpec.describe RuboCop::AST::ModuleNode do
  let(:module_node) { parse_source(source).ast }
    
            # If the call has a second argument, we can insert a line
        # break before the second argument and the rest of the
        # argument will get auto-formatted onto separate lines
        # by other cops.
        has_second_element = elements.length >= 2
    
            # Returns nil if no trailing external comma.
        def external_trailing_comma_offset_from_loc_end(node)
          end_pos = node.source_range.end_pos
          offset = 0
          limit = 20
          offset += 1 while offset < limit && space?(end_pos + offset)
          char = processed_source.buffer.source[end_pos + offset]
          return unless char == ','
    
          context 'with a non-matching symbol' do
        let(:ruby) { ''bar'.upcase' }
    
          it 'registers an offense for block body ending with a blank' do
        inspect_source(<<~RUBY)
          some_method #{open}
            do_something
    
          expect_offense(<<~RUBY)
        def method(arg)
                   ^^^ #{message}
          1
        end
      RUBY
    end
    
                add_offense(heredoc_node, location: :heredoc_end)
          else
            return if next_line_empty?(node.last_line)
    
            foobar
      end
    RUBY
  end
    
          # Checks whether the `for` node has a `do` keyword.
      #
      # @return [Boolean] whether the `for` node has a `do` keyword
      def do?
        loc.begin&.is?('do')
      end
    
      describe 'DELETE blocks' do
    it 'updates block from input data' do
      block = create(:block, user_id: user.id, input_css: '.blue { color: blue;}')
      delete '/blocks/#{block.id}'
      expect(Block.all.size).to eq(0)
    end
  end
end

    
        it 'leaves chat channel' do
      membership = ChatChannelMembership.last
      sign_in second_user
      delete '/chat_channel_memberships/#{membership.chat_channel.id}', params: {}
      expect(ChatChannelMembership.find(membership.id).status).to eq('left_channel')
    end
  end
end

    
          it 'redirects to appropriate if article belongs to org and user visits user version' do
        article.update(organization_id: create(:organization).id)
        get '/#{article.user.username}/#{article.slug}'
        expect(response.body).to redirect_to article.reload.path
      end
    
      def new
    @page = Page.new
  end
    
          def title
        'Comparison of #{@page.title}'
      end
    
        post '/edit/Multibyte',
         :content => 'りんご', :header => 'みかん', :footer => 'バナナ', :sidebar => 'スイカ',
         :page    => 'Multibyte', :format => :markdown, :message => 'mesg'
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
      test 'heavy use 2' do
    post '/create', :content => '한글 text', :page => 'k',
         :format             => 'markdown', :message => 'def'
    follow_redirect!
    assert last_response.ok?
    
    def bump_version
  old_file = File.read('lib/#{name}.rb')
  old_version_line = old_file[/^\s*VERSION\s*=\s*.*/]
  new_version = next_version
  # replace first match of old vesion with new version
  old_file.sub!(old_version_line, '  VERSION = '#{new_version}'')
    
    if options[:irb]
  require 'irb'
  # http://jameskilton.com/2009/04/02/embedding-irb-into-your-ruby-application/
  module IRB # :nodoc:
    def self.start_session(binding)
      unless @__initialized
        args = ARGV
        ARGV.replace(ARGV.dup)
        IRB.setup(nil)
        ARGV.replace(args)
        @__initialized = true
      end
    
          Spree.check_unused_translations
      if false && Spree.unused_translation_messages.any?
        puts '\nThere are unused translations within Spree:'
        puts Spree.unused_translation_messages.sort
        exit(1)
      end
    end
  end
end

    
            def create
          authorize! :create, ProductProperty
          @product_property = @product.product_properties.new(product_property_params)
          if @product_property.save
            respond_with(@product_property, status: 201, default_template: :show)
          else
            invalid_resource!(@product_property)
          end
        end
    
      before { instance.extend Tmuxinator::WemuxSupport }
    
      factory :wemux_project, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/sample_wemux.yml') }
    end
    
            options = {
          args: project_options[:args],
          custom_name: project_options[:custom_name],
          force_attach: attach,
          force_detach: detach,
          name: project_options[:name],
          project_config: project_options[:project_config]
        }
    
            it 'returns two panes in an Array' do
          expect(window.panes).to match [
            a_pane.with(index: 0).and_commands('vim'),
            a_pane.with(index: 1).and_commands(command1, command2)
          ]
        end
      end