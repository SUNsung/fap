
        
            def ensure_id_sequences_exist
      # Find tables using timestamp IDs.
      connection.tables.each do |table|
        # We're only concerned with 'id' columns.
        next unless (id_col = connection.columns(table).find { |col| col.name == 'id' })
    
      describe '#call' do
    context 'when actor is the sender'
    context 'when actor differs from sender' do
      let(:forwarder) { Fabricate(:account, domain: 'example.com', uri: 'http://example.com/other_account') }
    
          it 'renders application layout' do
        get :show, params: { id: 'test', max_id: late.id }
        expect(response).to render_template layout: 'application'
      end
    end
    
            def initialize(argv)
          @pod_name = argv.shift_argument
          @wipe_all = argv.flag?('all')
          super
        end
    
          def markdown_podfile
        UI::ErrorReport.markdown_podfile
      end
    
            #----------------------------------------#
    
    When /^(?:|I )choose '([^']*)'$/ do |field|
  choose(field)
end
    
            @queued_for_write[name] = style.processors.
          reduce(original) do |file, processor|
          file = Paperclip.processor(processor).make(file, style.processor_options, self)
          intermediate_files << file unless file == @queued_for_write[:original]
          file
        end
    
        # Never trust parameters from the scary internet, only allow the white list through.
    def book_params
      params.require(:book).permit(:name)
    end
end

    
            def autocorrect(node)
          lambda do |corrector|
            each_unnecessary_space_match(node) do |range|
              corrector.replace(range, ' ')
            end
          end
        end
    
            def on_case(case_node)
          case_node.when_branches.each_with_object([]) do |when_node, previous|
            when_node.each_condition do |condition|
              next unless repeated_condition?(previous, condition)
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end