
        
            args = msg['args'] + [msg['error_message']]
    
        def aes256_gcm_decrypt(value)
      return unless value
    
          context 'and user can admin_project_member' do
        before do
          allow(presenter).to receive(:can?).with(user, :admin_project_member, project).and_return(true)
        end
    
      it 'calls Gitlab::Diff::File#unfold_diff_lines with correct position' do
    position = instance_double(Gitlab::Diff::Position, file_path: 'README')
    readme_file = instance_double(Gitlab::Diff::File, file_path: 'README')
    other_file = instance_double(Gitlab::Diff::File, file_path: 'foo.rb')
    nil_path_file = instance_double(Gitlab::Diff::File, file_path: nil)
    
        def backup_path
      return if @cask.staged_path.nil?
    
        context 'with :using and :data specified' do
      let(:specs) {
        {
          using: :post,
          data:  {
            form: 'data',
            is:   'good',
          },
        }
      }
    
      def show_version_java
    properties = java.lang.System.getProperties
    puts 'java #{properties['java.version']} (#{properties['java.vendor']})'
    puts 'jvm #{properties['java.vm.name']} / #{properties['java.vm.version']}'
  end # def show_version_java
    
    require 'bundler/cli'
require 'bundler/friendly_errors'
    
    require 'clamp'
require 'pluginmanager/util'
require 'pluginmanager/gemfile'
require 'pluginmanager/install'
require 'pluginmanager/remove'
require 'pluginmanager/list'
require 'pluginmanager/update'
require 'pluginmanager/pack'
require 'pluginmanager/unpack'
require 'pluginmanager/generate'
require 'pluginmanager/prepare_offline_pack'
require 'pluginmanager/proxy_support'
configure_proxy
    
        context 'update all the plugins' do
      it 'has executed successfully' do
        logstash.run_command_in_path('bin/logstash-plugin update --no-verify')
        expect(logstash).to have_installed?(plugin_name, '0.1.1')
      end
    end
  end
end

    
          it { expect(class_node.body).to be(nil) }
    end
  end
end

    
        it { expect(module_node.is_a?(described_class)).to be(true) }
  end
    
    module RuboCop
  module Cop
    # This auto-corrects unused arguments.
    class UnusedArgCorrector
      extend RangeHelp
    
              outermost_send = outermost_send_on_same_line(heredoc_arg)
          return unless outermost_send
          return unless outermost_send.loc.end
          return unless heredoc_arg.first_line != outermost_send.loc.end.line
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for trailing comma in argument lists.
      #
      # @example EnforcedStyleForMultiline: consistent_comma
      #   # bad
      #   method(1, 2,)
      #
      #   # good
      #   method(1, 2)
      #
      #   # good
      #   method(
      #     1, 2,
      #     3,
      #   )
      #
      #   # good
      #   method(
      #     1,
      #     2,
      #   )
      #
      # @example EnforcedStyleForMultiline: comma
      #   # bad
      #   method(1, 2,)
      #
      #   # good
      #   method(1, 2)
      #
      #   # good
      #   method(
      #     1,
      #     2,
      #   )
      #
      # @example EnforcedStyleForMultiline: no_comma (default)
      #   # bad
      #   method(1, 2,)
      #
      #   # good
      #   method(1, 2)
      #
      #   # good
      #   method(
      #     1,
      #     2
      #   )
      class TrailingCommaInArguments < Cop
        include TrailingComma
    
        context 'when there's a similar variable' do
      it 'suggests the variable name' do
        expect_offense(<<~RUBY)
          def some_method
            environment = nil
            another_symbol
            enviromnent = {}
            ^^^^^^^^^^^ Useless assignment to variable - `enviromnent`. Did you mean `environment`?
            puts environment
          end
        RUBY
      end
    end