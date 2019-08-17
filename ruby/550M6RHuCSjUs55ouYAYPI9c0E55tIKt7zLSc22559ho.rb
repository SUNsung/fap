
        
              def bump_version(bump_type)
        UI.user_error!('Do not support bump of 'appendix', please use `update_version_appendix(appendix)` instead') if bump_type == 'appendix'
    
        def run(path, color = nil)
      unless color
        color = Frameit::Color::BLACK
        color = Frameit::Color::SILVER if Frameit.config[:white] || Frameit.config[:silver]
        color = Frameit::Color::GOLD if Frameit.config[:gold]
        color = Frameit::Color::ROSE_GOLD if Frameit.config[:rose_gold]
      end
    
                  # Creates the mapping for a bundle identifier and profile specifier/uuid
              if has_profile_specifier
                provisioning_profile_mapping[bundle_identifier] = provisioning_profile_specifier
              elsif has_profile_uuid
                provisioning_profile_mapping[bundle_identifier] = provisioning_profile_uuid
              end
            end
    
      describe '#detect_project_profile_mapping' do
    it 'returns the mapping of the selected provisioning profiles', requires_xcode: true do
      workspace_path = 'gym/spec/fixtures/projects/cocoapods/Example.xcworkspace'
      project = FastlaneCore::Project.new({
        workspace: workspace_path
      })
      csm = Gym::CodeSigningMapping.new(project: project)
      expect(csm.detect_project_profile_mapping).to eq({ 'family.wwdc.app' => 'match AppStore family.wwdc.app', 'family.wwdc.app.watchkitapp' => 'match AppStore family.wwdc.app.watchkitapp', 'family.wwdc.app.watchkitapp.watchkitextension' => 'match AppStore family.wwdc.app.watchkitappextension' })
    end
    
            containing = File.expand_path(Snapshot.config[:buildlog_path])
        FileUtils.mkdir_p(containing)
    
            def read(path)
          blob = @repository.blob_at(@commit.id, path) if @commit
          raise FileNotFoundError if blob.nil?
    
      def notification_service
    @notification_service ||= NotificationService.new
  end
end

    
        def aes256_gcm_decrypt(value)
      return unless value
    
            if options.valid_within && (Time.now.to_i - @decoded['iat']).abs > options.valid_within.to_i
          raise ClaimInvalid, ''iat' timestamp claim is too skewed from present'
        end
    
              @diffable = diffable
          @include_stats = diff_options.delete(:include_stats)
          @project = project
          @diff_options = diff_options
          @diff_refs = diff_refs
          @fallback_diff_refs = fallback_diff_refs
          @repository = project.repository
        end
    
          subject.diff_files
    end
    
      def self.move_cursor_up(val)
    if val > 0
      @@SetConsoleCursorPosition.call(@@hConsoleHandle, (cursor_pos.y - val) * 65536 + cursor_pos.x)
    elsif val < 0
      move_cursor_down(-val)
    end
  end
    
      def test_functions
    assert_equal (1),                                          CMath.exp(0)
    assert_in_delta (-1.1312043837568135+2.4717266720048188i), CMath.exp(1+2i)
    assert_in_delta (-1),                                      CMath.exp(Math::PI.i)
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.exp('0') }
    
      it 'returns nil at the end of the stream' do
    gz = Zlib::GzipReader.new @io
    gz.read
    pos = gz.pos
    gz.getc.should be_nil
    gz.pos.should == pos
  end
    
      before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end
    
      it 'calls the given block for each line in the stream, passing the line as an argument' do
    ScratchPad.record []
    @gzreader.send(@method) { |b| ScratchPad << b }
    
        def gem_config_path(gem_name, relative_config_path)
      spec = Gem::Specification.find_by_name(gem_name)
      File.join(spec.gem_dir, relative_config_path)
    rescue Gem::LoadError => e
      raise Gem::LoadError,
            'Unable to find gem #{gem_name}; is the gem installed? #{e}'
    end
  end
end

    
          module_function
    
            def remove_incorrect_closing_paren(node, corrector)
          corrector.remove(
            range_between(
              incorrect_parenthesis_removal_begin(node),
              incorrect_parenthesis_removal_end(node)
            )
          )
        end
    
          expect_offense(<<~RUBY)
        def method(arg)
                   ^^^ #{message}
          1
        end
      RUBY
    end
    
        it 'does not registers an offense Array.new with block' do
      expect_no_offenses('test = Array.new { 1 }')
    end
    
    
    {      # Checks whether the `block` literal is delimited by curly braces.
      #
      # @return [Boolean] whether the `block` literal is enclosed in braces
      def braces?
        loc.end&.is?('}')
      end
    
    module RuboCop
  module AST
    # A node extension for `hash` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `hash` nodes within RuboCop.
    class HashNode < Node
      # Returns an array of all the key value pairs in the `hash` literal.
      #
      # @return [Array<PairNode>] an array of `pair` nodes
      def pairs
        each_pair.to_a
      end
    
            other_branches = if elsif_conditional?
                           else_branch.branches
                         else
                           [else_branch]
                         end
        branches.concat(other_branches)
      end
    
        def set(*args)
      options = args.extract_options!
      options.each do |name, value|
        set_preference name, value
      end
    
              scope = scope.not_deleted unless params[:show_deleted]
          scope = scope.not_discontinued unless params[:show_discontinued]
        else
          scope = Product.accessible_by(current_ability, :show).active.includes(*product_includes)
        end
    
              if @address.update(address_params)
            respond_with(@address, default_template: :show)
          else
            invalid_resource!(@address)
          end
        end
    
            def find_property
          @property = Spree::Property.accessible_by(current_ability, :show).find(params[:id])
        rescue ActiveRecord::RecordNotFound
          @property = Spree::Property.accessible_by(current_ability, :show).find_by!(name: params[:id])
        end
    
            def show
          authorize! :admin, ReturnAuthorization
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :show).find(params[:id])
          respond_with(@return_authorization)
        end
    
            def show
          @state = scope.find(params[:id])
          respond_with(@state)
        end