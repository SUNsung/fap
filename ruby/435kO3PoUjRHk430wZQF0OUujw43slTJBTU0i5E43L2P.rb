
        
                  table = reflection.aliased_table
          value = transform_value(owner[foreign_key])
          scope = apply_scope(scope, table, key, value)
    
                def when_connected(&block)
              if @raw_client
                block.call
              else
                @when_connected << block
              end
            end
    
      def test_helper_proxy
    methods = AllHelpersController.helpers.methods
    
      s.metadata = {
    'source_code_uri' => 'https://github.com/rails/rails/tree/v#{version}/actionmailer',
    'changelog_uri'   => 'https://github.com/rails/rails/blob/v#{version}/actionmailer/CHANGELOG.md'
  }
    
        private
      # 'Deserialize' the mailer class name by hand in case another argument
      # (like a Global ID reference) raised DeserializationError.
      def mailer_class
        if mailer = Array(@serialized_arguments).first || Array(arguments).first
          mailer.constantize
        end
      end
    
        # An email was generated.
    def process(event)
      debug do
        mailer = event.payload[:mailer]
        action = event.payload[:action]
        '#{mailer}##{action}: processed outbound mail in #{event.duration.round(1)}ms'
      end
    end
    
    class Jekyll::Commands::NewTheme < Jekyll::Command
  class << self
    def init_with_program(prog)
      prog.command(:'new-theme') do |c|
        c.syntax 'new-theme NAME'
        c.description 'Creates a new Jekyll theme scaffold'
        c.option 'code_of_conduct', \
          '-c', '--code-of-conduct', \
          'Include a Code of Conduct. (defaults to false)'
    
              # If it's a directory they want to exclude, AKA
          # ends with a '/' then we will go on to check and
          # see if the entry falls within that path and
          # exclude it if that's the case.
    
        # Check if excerpt includes a string
    #
    # Returns true if the string passed in
    def include?(something)
      (output && output.include?(something)) || content.include?(something)
    end
    
        # Gets/Sets the extension of this layout.
    attr_accessor :ext
    
      # Make it so that network access from the vagrant guest is able to
  # use SSH private keys that are present on the host without copying
  # them into the VM.
  config.ssh.forward_agent = true
    
            css('.toplang', '#quickview', '.top').remove
    
        # apply general less to scss conversion
    def convert_to_scss(file)
      # get local mixin names before converting the definitions
      mixins = shared_mixins + read_mixins(file)
      file   = replace_vars(file)
      file   = replace_mixin_definitions(file)
      file   = replace_mixins(file, mixins)
      file   = extract_mixins_from_selectors(file, CLASSES_TO_MIXINS.inject({}) { |h, cl| h.update('.#{cl}' => cl) })
      file   = replace_spin(file)
      file   = replace_fadein(file)
      file   = replace_image_urls(file)
      file   = replace_escaping(file)
      file   = convert_less_ampersand(file)
      file   = deinterpolate_vararg_mixins(file)
      file   = replace_calculation_semantics(file)
      file   = replace_file_imports(file)
      file   = wrap_at_groups_with_at_root(file)
      file
    end
    
    class NodeMincerTest < Minitest::Test
  DUMMY_PATH = 'test/dummy_node_mincer'
    
      # Read and eval a .rake file in such a way that `self` within the .rake file
  # refers to this plugin instance. This gives the tasks in the file access to
  # helper methods defined by the plugin.
  def eval_rakefile(path)
    contents = IO.read(path)
    instance_eval(contents, path, 1)
  end
    
        it 'yields the properties for a single role' do
      recipient = mock('recipient')
      recipient.expects(:doit).with('example1.com', :redis, port: 6379, type: :slave)
      recipient.expects(:doit).with('example2.com', :redis, port: 6379, type: :master)
      dsl.role_properties(:redis) do |host, role, props|
        recipient.doit(host, role, props)
      end
    end