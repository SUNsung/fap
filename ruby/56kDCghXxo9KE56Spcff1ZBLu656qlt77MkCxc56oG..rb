    respond_to do |format|
      if !running? && @job.destroy
        format.html { redirect_to jobs_path, notice: 'Job deleted.' }
        format.json { head :no_content }
      else
        format.html { redirect_to jobs_path, alert: 'Can not delete a running job.' }
        format.json { render json: @job.errors, status: :unprocessable_entity }
      end
    end
  end
    
      def user_credential_params
    params.require(:user_credential).permit(:credential_name, :credential_value, :mode)
  end
end

    
        def add(path, content)
      @pages[path] = content
    end
    
          dest = url.normalized_path
      dest_dir = Pathname.new(dest)
    
        public
    
      class DummyOutput < String
    alias write concat
  end
  def no_error(*args)
    $stderr, stderr = DummyOutput.new, $stderr
    assert_nothing_raised(*args) {return yield}
  ensure
    stderr, $stderr = $stderr, stderr
    $!.backtrace.delete_if {|e| /\A#{Regexp.quote(__FILE__)}:#{__LINE__-2}/o =~ e} if $!
    assert_empty(stderr)
  end
    
    
    {        Zlib::GzipReader.open(t.path) do |f|
          assert_equal(false, f.closed?)
          f.read
          assert_equal(false, f.closed?)
          f.close
          assert_equal(true, f.closed?)
        end
      }
    end
    
            expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(actor)
        expect(ActivityPub::Activity).to receive(:factory).with(instance_of(Hash), actor, instance_of(Hash))
    
        respond_to do |format|
      format.html do
        serializable_resource = ActiveModelSerializers::SerializableResource.new(InitialStatePresenter.new(initial_state_params), serializer: InitialStateSerializer)
        @initial_state_json   = serializable_resource.to_json
      end
    
      private
    
            def on_send(node)
          return unless match_call?(node) &&
                        (!node.value_used? || only_truthiness_matters?(node)) &&
                        !(node.parent && node.parent.block_type?)
    
            private
    
            MSG = 'Do not freeze immutable objects, as freezing them has no ' \
              'effect.'.freeze
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'padding-top: 11px; ' +
                'padding-right: 12px; ' +
                'padding-left: 13px;'
      bad_rule = 'padding-bottom: null;'