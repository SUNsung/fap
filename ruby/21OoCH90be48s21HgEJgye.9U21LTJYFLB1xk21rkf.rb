
        
            it 'shows the dry run pop up without previous events and selects the events tab when a event was created' do
      open_dry_run_modal(agent)
      click_on('Dry Run')
      expect(page).to have_text('Biologists play reverse')
      expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabEvents']')
    end
    
          it 'loads all workers' do
        workers = @agent_runner.send(:load_workers)
        expect(workers).to be_a(Hash)
        expect(workers.keys).to eq(['HuginnScheduler', 'DelayedJobWorker'])
      end
    
        it 'requires a valid log level' do
      @log.level = nil
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:level)
    
      context 'when arguments to a method' do
    let(:prefix) { 'bar(' }
    let(:suffix) { ')' }
    let(:source) { construct(false, true) }
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
          # This is used for duck typing with `pair` nodes which also appear as
      # `hash` elements.
      #
      # @return [false]
      def colon?
        false
      end
    
          # Whether the last argument of the node is a block pass,
      # i.e. `&block`.
      #
      # @return [Boolean] whether the last argument of the node is a block pass
      def block_argument?
        arguments? &&
          (last_argument.block_pass_type? || last_argument.blockarg_type?)
      end
    end
  end
end
