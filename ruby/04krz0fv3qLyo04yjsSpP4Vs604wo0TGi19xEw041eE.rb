
        
                # This returns all the config classes for the various pushes.
        #
        # @return [Registry]
        def push_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:push])
            end
          end
        end
    
        # @return [String] jruby, ruby, rbx, ...
    def ruby_engine
      RUBY_ENGINE
    end
    
      # We compare the before the update and after the update
  def display_updated_plugins(previous_gem_specs_map)
    update_count = 0
    find_latest_gem_specs.values.each do |spec|
      name = spec.name.downcase
      if previous_gem_specs_map.has_key?(name)
        if spec.version != previous_gem_specs_map[name].version
          puts('Updated #{spec.name} #{previous_gem_specs_map[name].version.to_s} to #{spec.version.to_s}')
          update_count += 1
        end
      else
        puts('Installed #{spec.name} #{spec.version.to_s}')
        update_count += 1
      end
    end
    
      it 'returns the pipeline id' do
    expect(subject.pipeline_id).to eq(pipeline_id)
  end
    
    platforms = PlatformConfig.new
    
            def delimiter_delta
          return 0 if first.same_line?(second)
          return 0 if first.delimiter != second.delimiter
    
            def declaration_with_comment(node)
          buffer = processed_source.buffer
          begin_pos = get_source_range(node, comments_as_separators).begin_pos
          end_line = buffer.line_for_position(node.loc.expression.end_pos)
          end_pos = buffer.line_range(end_line).end_pos
          Parser::Source::Range.new(buffer, begin_pos, end_pos)
        end
    
              ignored_end_pos = if ignored_loc.respond_to?(:heredoc_body)
                              ignored_loc.heredoc_end.end_pos
                            else
                              ignored_loc.expression.end_pos
                            end
          ignored_end_pos >= node.source_range.end_pos
        end
      end
    
    module RuboCop
  module Cop
    module Lint
      #
      # This cop emulates the following Ruby warnings in Ruby 2.6.
      #
      # % cat example.rb
      # ERB.new('hi', nil, '-', '@output_buffer')
      # % ruby -rerb example.rb
      # example.rb:1: warning: Passing safe_level with the 2nd argument of
      # ERB.new is deprecated. Do not use it, and specify other arguments as
      # keyword arguments.
      # example.rb:1: warning: Passing trim_mode with the 3rd argument of
      # ERB.new is deprecated. Use keyword argument like
      # ERB.new(str, trim_mode:...) instead.
      # example.rb:1: warning: Passing eoutvar with the 4th argument of ERB.new
      # is deprecated. Use keyword argument like ERB.new(str, eoutvar: ...)
      # instead.
      #
      # Now non-keyword arguments other than first one are softly deprecated
      # and will be removed when Ruby 2.5 becomes EOL.
      # `ERB.new` with non-keyword arguments is deprecated since ERB 2.2.0.
      # Use `:trim_mode` and `:eoutvar` keyword arguments to `ERB.new`.
      # This cop identifies places where `ERB.new(str, trim_mode, eoutvar)` can
      # be replaced by `ERB.new(str, :trim_mode: trim_mode, eoutvar: eoutvar)`.
      #
      # @example
      #   # Target codes supports Ruby 2.6 and higher only
      #   # bad
      #   ERB.new(str, nil, '-', '@output_buffer')
      #
      #   # good
      #   ERB.new(str, trim_mode: '-', eoutvar: '@output_buffer')
      #
      #   # Target codes supports Ruby 2.5 and lower only
      #   # good
      #   ERB.new(str, nil, '-', '@output_buffer')
      #
      #   # Target codes supports Ruby 2.6, 2.5 and lower
      #   # bad
      #   ERB.new(str, nil, '-', '@output_buffer')
      #
      #   # good
      #   # Ruby standard library style
      #   # https://github.com/ruby/ruby/commit/3406c5d
      #   if ERB.instance_method(:initialize).parameters.assoc(:key) # Ruby 2.6+
      #     ERB.new(str, trim_mode: '-', eoutvar: '@output_buffer')
      #   else
      #     ERB.new(str, nil, '-', '@output_buffer')
      #   end
      #
      #   # good
      #   # Use `RUBY_VERSION` style
      #   if RUBY_VERSION >= '2.6'
      #     ERB.new(str, trim_mode: '-', eoutvar: '@output_buffer')
      #   else
      #     ERB.new(str, nil, '-', '@output_buffer')
      #   end
      #
      class ErbNewArguments < Cop
        extend TargetRubyVersion
    
        def name
      project.name
    end
    
      describe '#hook_on_project_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_start' }
    end
  end
  describe '#hook_on_project_first_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_first_start' }
    end
  end
  describe '#hook_on_project_restart' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_restart' }
    end
  end
  describe '#hook_on_project_exit' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_exit' }
    end
  end
  describe '#hook_on_project_stop' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_stop' }
    end
  end
end

    
        context 'when first window has a name' do
      it 'returns command to start a new detached session' do
        expect(project.tmux_kill_session_command).to eq command
      end
    end
  end
    
        msg = 'Actual pane does not match expected'
    msg << '\n  Expected #{@commands} but has #{actual.commands}' if @commands
    msg << '\n  Expected pane to have #{@expected_attrs}' if @expected_attrs
  end
    
        class << self
      # The directory (created if needed) in which to store new projects
      def directory
        return environment if environment?
        return xdg if xdg?
        return home if home?
        # No project directory specified or existant, default to XDG:
        FileUtils::mkdir_p(xdg)
        xdg
      end
    
          it 'returns true' do
        expect(described_class.default?).to be_truthy
      end
    end
    
      context 'called with one size' do
    it 'applies same width to all sides' do
      ruleset = 'position: fixed; ' +
                'top: 1em; ' +
                'right: 1em; ' +
                'bottom: 1em; ' +
                'left: 1em;'