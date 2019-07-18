
        
            it 'should return consistent encodings for fresh and cached downloads' do
      # Net::HTTP always returns binary ASCII-8BIT encoding. File.read auto-detects the encoding
      # Make sure we File.read after downloading a file for consistency
    
      def descriptions_for(user)
    descriptions_by_id[user.id].join ', '
  end
    
          expect(Rails.logger.warnings).to eq(1)
      expect(status).to eq(429)
    end
    
          group2.update!(automatic: true)
    
          result = reviewable.perform(current_user, params[:action_id].to_sym, args)
    rescue Reviewable::InvalidAction => e
      # Consider InvalidAction an InvalidAccess
      raise Discourse::InvalidAccess.new(e.message)
    rescue Reviewable::UpdateConflict
      return render_json_error(I18n.t('reviewables.conflict'), status: 409)
    end
    
    RSpec.describe Admin::GroupsController do
  fab!(:admin) { Fabricate(:admin) }
  fab!(:user) { Fabricate(:user) }
  fab!(:group) { Fabricate(:group) }
    
            expect(upload.extension).to eq('png')
        expect(File.extname(upload.url)).to eq('.png')
        expect(upload.original_filename).to eq('png_as.png')
      end
    
        let(:src) do
      [
        'def foo; end',
        'def bar; end',
        'def baz; end'
      ].join('\n')
    end
    
            def correct_for_blockarg_type(node)
          lambda do |corrector|
            range = range_with_surrounding_space(range: node.source_range,
                                                 side: :left)
            range = range_with_surrounding_comma(range, :left)
            corrector.remove(range)
          end
        end
      end
    end
  end
end

    
              args.one? || !args[-2].hash_type?
        end
      end
    end
  end
end

    
      it 'can correct MethodDefParentheses and other offense' do
    create_file('example.rb', <<~RUBY)
      def primes limit
        1.upto(limit).select { |i| i.even? }
      end
    RUBY
    expect(cli.run(%w[-D --auto-correct])).to eq(0)
    expect($stderr.string).to eq('')
    expect(IO.read('example.rb')).to eq(<<~RUBY)
      # frozen_string_literal: true
    
      context 'when a variable is reassigned ' \
          'with logical operator assignment and referenced' do
    it 'accepts' do
      expect_no_offenses(<<~RUBY)
        def some_method
          foo = do_something_returns_object_or_nil
          foo ||= 1
          foo
        end
      RUBY
    end
  end
    
        def file_checksum(file, config_store)
      digester = Digest::SHA1.new
      mode = File.stat(file).mode
      digester.update(
        '#{file}#{mode}#{config_store.for(file).signature}'
      )
      digester.file(file)
      digester.hexdigest
    rescue Errno::ENOENT
      # Spurious files that come and go should not cause a crash, at least not
      # here.
      '_'
    end
    
      it 'registers an offense for `raise` guard clause not followed ' \
     'by empty line when `if` condition is after heredoc' do
    expect_offense(<<~RUBY)
      def foo
        raise ArgumentError, <<-MSG if path
          Must be called with mount point
        MSG
      ^^^^^ Add empty line after guard clause.
        bar
      end
    RUBY
  end
    
          # Checks whether this is a multiline block. This is overridden here
      # because the general version in `Node` does not work for `block` nodes.
      #
      # @return [Boolean] whether the `block` literal is on a several lines
      def multiline?
        !single_line?
      end
    
        def pre
      _pre = yaml['pre']
    
    FactoryBot.define do
  factory :project, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/sample.yml') }
    end
    
        desc 'debug [PROJECT] [ARGS]', COMMANDS[:debug]
    method_option :attach, type: :boolean,
                           aliases: '-a',
                           desc: 'Attach to tmux session after creation.'
    method_option :name, aliases: '-n',
                         desc: 'Give the session a different name'
    method_option 'project-config', aliases: '-p',
                                    desc: 'Path to project config file'