
        
            get :hello_world
    assert_equal 'Guten Tag', @response.body
  end
    
        # Returns a debug string on inspecting the static file.
    # Includes only the relative path of the object.
    def inspect
      '#<#{self.class} @relative_path=#{relative_path.inspect}>'
    end
    
              # `mathjax` emgine is bundled within kramdown-2.x and will be handled by
          # kramdown itself.
          if (math_engine = @config['math_engine']) && math_engine != 'mathjax'
            Jekyll::External.require_with_graceful_fail('kramdown-math-#{math_engine}')
          end
        end
    
        should 'move coderay to syntax_highlighter_opts' do
      original = Kramdown::Document.method(:new)
      markdown = Converters::Markdown.new(
        Utils.deep_merge_hashes(@config,
                                'higlighter' => nil,
                                'markdown'   => 'kramdown',
                                'kramdown'   => {
                                  'syntax_highlighter' => 'coderay',
                                  'coderay'            => {
                                    'hello' => 'world',
                                  },
                                })
      )
    
          total_allocated_output = report.scale_bytes(report.total_allocated_memsize)
      total_retained_output  = report.scale_bytes(report.total_retained_memsize)
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
            def initialize
          @websockets = []
          @connections_count = 0
          @started_event = Utils::ThreadEvent.new
          @stopped_event = Utils::ThreadEvent.new
        end
    
    # Searches and reads files present on each GitLab project repository
module Gitlab
  module Template
    module Finders
      class RepoTemplateFinder < BaseTemplateFinder
        # Raised when file is not found
        FileNotFoundError = Class.new(StandardError)
    
        it 'raises an error if the path does not exist' do
      expect { finder.read('does/not/exist') }.to raise_error(described_class::FileNotFoundError)
    end
  end
    
            it 'calls errors.add' do
          expect(errors).to have_received(:add)
            .with(:text, I18n.t('statuses.disallowed_hashtags', tags: tags.join(', '), count: tags.size))
        end
      end
    end
  end
end

    
        it 'renders subject localized for the default locale if the locale of the receiver is unavailable' do
      receiver.update!(locale: nil)
      expect(mail.subject).to eq I18n.t(*args, kwrest.merge(locale: I18n.default_locale))
    end
  end
    
      def show
    render json: @poll, serializer: REST::PollSerializer, include_results: true
  end
    
        #
    # Wakes up all threads waiting for this lock.
    #
    def broadcast
      @monitor.__send__(:mon_check_owner)
      @cond.broadcast
    end
    
        assert_equal (0),                                          CMath.atan2(0,1)
    assert_in_delta (1.3389725222944935+0.4023594781085251i),  CMath.atan2(1+2i,1)
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.atan2('0', 1) }
  end
    
        cm = tl.add_class RDoc::NormalClass, 'Klass'
    cm.add_attribute @a
    
    end
    
            verb('http://images.google.com/images?num=30&q=larry+bird\n'),
    
        out = m.convert doc, tt
    
        export LANG=en_US.UTF-8
    DOC
  else
    STDERR.puts <<-DOC
    \e[33mWARNING: CocoaPods requires your terminal to be using UTF-8 encoding.
    Consider adding the following to ~/.profile:
    
              # Checks to see if the config files at two paths exist and are identical
          #
          # @param  The existing config path
          #
          # @param  The pod config path
          #
          def self.existing_config_is_identical_to_pod_config?(existing_config_path, pod_config_path)
            existing_config_path.file? && (!pod_config_path.file? || FileUtils.compare_file(existing_config_path, pod_config_path))
          end
    
      autoload :AggregateTarget,           'cocoapods/target/aggregate_target'
  autoload :Command,                   'cocoapods/command'
  autoload :Deintegrator,              'cocoapods_deintegrate'
  autoload :Executable,                'cocoapods/executable'
  autoload :ExternalSources,           'cocoapods/external_sources'
  autoload :Installer,                 'cocoapods/installer'
  autoload :HooksManager,              'cocoapods/hooks_manager'
  autoload :PodTarget,                 'cocoapods/target/pod_target'
  autoload :Project,                   'cocoapods/project'
  autoload :Resolver,                  'cocoapods/resolver'
  autoload :Sandbox,                   'cocoapods/sandbox'
  autoload :Target,                    'cocoapods/target'
  autoload :Validator,                 'cocoapods/validator'
    
      describe '.new' do
    let(:source) do
      'module Foo; end'
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

    
            def autocorrect(range)
          PunctuationCorrector.swap_comma(range)
        end
    
            def contains_guard_clause?(node)
          node.if_branch&.guard_clause?
        end