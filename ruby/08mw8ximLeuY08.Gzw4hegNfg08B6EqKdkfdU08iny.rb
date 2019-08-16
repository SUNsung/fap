
        
            helpers do
      def render_response(template_type, template)
        not_found!(template_type.to_s.singularize) unless template
        present template, with: Entities::Template
      end
    end
    
        def find(query)
      query = Gitlab::Search::Query.new(query, encode_binary: true) do
        filter :filename, matcher: ->(filter, blob) { blob.binary_filename =~ /#{filter[:regex_value]}$/i }
        filter :path, matcher: ->(filter, blob) { blob.binary_filename =~ /#{filter[:regex_value]}/i }
        filter :extension, matcher: ->(filter, blob) { blob.binary_filename =~ /\.#{filter[:regex_value]}$/i }
      end
    
          private
    
            @decoded
      end
    
          context 'when user cannot update_group_member' do
        before do
          allow(presenter).to receive(:can?).with(user, :update_group_member, presenter).and_return(false)
          allow(presenter).to receive(:can?).with(user, :override_group_member, presenter).and_return(false)
        end
    
          it { expect(presenter.can_update?).to eq(true) }
    end
    
        it 'When go get is executed' do
      expect_offense(<<~RUBY)
        class Foo < Formula
          url 'https://brew.sh/foo-1.0.tgz'
          homepage 'https://brew.sh'
    
      specify 'explicit options override defaupt depends_on option description' do
    subject.option('with-foo', 'blah')
    subject.depends_on('foo' => :optional)
    expect(subject.options.first.description).to eq('blah')
  end
    
        def latest_sdk_version
      # TODO: bump version when new Xcode macOS SDK is released
      Version.new '10.15'
    end
    
        def metadata_subdir(leaf, version: self.version, timestamp: :latest, create: false)
      raise CaskError, 'Cannot create metadata subdir when timestamp is :latest.' if create && timestamp == :latest
    
        expect do
      described_class.run('local-transmission', 'local-caffeine')
    end.to output('#{transmission_location}\n#{caffeine_location}\n').to_stdout
  end
    
      def version(val = nil)
    @version ||= begin
      version = detect_version(val)
      version.null? ? nil : version
    end
  end
    
          # Remove any escape sequences added by `shellescape` in Project#name.
      # Escapes can result in: 'ArgumentError: invalid multibyte character'
      # when attempting to match `name` against `sessions`.
      # Please see issue #564.
      unescaped_name = name.shellsplit.join('')
    
        def build_panes(panes_yml)
      return if panes_yml.nil?