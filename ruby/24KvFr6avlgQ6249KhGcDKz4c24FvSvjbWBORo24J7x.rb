
        
        WITH_LIQUID = <<-LIQUID.freeze
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce auctor libero at
pharetra tempus. {{ author }} et metus fermentum, eu cursus lorem
mattis. Curabitur vel dui et lacus rutrum suscipit et eget neque.
    
                c.option 'force', '--force', 'Force creation even if PATH already exists'
            c.option 'blank', '--blank', 'Creates scaffolding but with empty files'
            c.option 'skip-bundle', '--skip-bundle', 'Skip 'bundle install''
    
    module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
                Jekyll.logger.debug 'LiveReload:', 'Reloading #{p.url}'
            Jekyll.logger.debug '', json_message
            @websockets.each { |ws| ws.send(json_message) }
          end
        end
    
    source 'https://rubygems.org'
    
    if Encoding.default_external != Encoding::UTF_8
    
          def plugins_string
        UI::ErrorReport.plugins_string
      end
    
          it 'corrects one hash parameter without braces with one hash value' do
        corrected = autocorrect_source('where(x: { 'y' => 'z' })')
        expect(corrected).to eq('where({x: { 'y' => 'z' }})')
      end
    end
  end
end

    
          # The body of the method definition.
      #
      # @note this can be either a `begin` node, if the method body contains
      #       multiple expressions, or any other node, if it contains a single
      #       expression.
      #
      # @return [Node] the body of the method definition
      def body
        node_parts[0]
      end
    
            each_child_node(:pair) do |pair|
          yield(*pair)
        end