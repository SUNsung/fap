
        
              attr_reader :headers
    
            # @private
        # @return [Hash<PodVariant, String>]
        #
        def scope_by_specs
          root_spec = variants.first.root_spec
          specs = [root_spec]
          specs += if root_spec.default_subspecs.empty?
                     root_spec.subspecs.compact
                   else
                     root_spec.default_subspecs.map do |subspec_name|
                       root_spec.subspec_by_name('#{root_spec.name}/#{subspec_name}')
                     end
          end
          default_specs = Set.new(specs)
          grouped_variants = group_by(&:specs)
          all_spec_variants = grouped_variants.map { |set| set.variants.first.specs }
          common_specs = all_spec_variants.map(&:to_set).flatten.inject(&:&)
          omit_common_specs = common_specs.any? && common_specs.proper_superset?(default_specs)
          scope_if_necessary(grouped_variants.map(&:scope_by_build_type)) do |variant|
            specs = variant.specs.to_set
    
    ROOT = Pathname.new(File.expand_path('../../', __FILE__))
$:.unshift((ROOT + 'lib').to_s)
$:.unshift((ROOT + 'spec').to_s)
    
          it 'allows to differentiate between an exclusive variant with a specific subspec and ' \
        'an inclusive variant with the default subspecs plus a non-default subspec' do
        variants = PodVariantSet.new([
          PodVariant.new([@foo_subspec], [], [], Platform.ios),
          PodVariant.new([@root_spec, @default_subspec, @foo_subspec], [], [], Platform.ios),
        ])
        variants.scope_suffixes.values.should == %w(Foo .default-Foo)
      end
    
          it 'returns the path of output file for the check pod manifest file  script' do
        @target.check_manifest_lock_script_output_file_path.should == '$(DERIVED_FILE_DIR)/Pods-checkManifestLockResult.txt'
      end
    end
    
            it 'removes outdated custom shell script phases' do
          @pod_bundle.target_definition.stubs(:script_phases).returns([:name => 'Custom Script', :script => 'echo 'Hello World''])
          @target_integrator.integrate!
          target = @target_integrator.send(:native_targets).first
          target.shell_script_build_phases.find { |bp| bp.name == @user_script_phase_name }.should.not.be.nil
          @pod_bundle.target_definition.stubs(:script_phases).returns([])
          @target_integrator.integrate!
          target.shell_script_build_phases.find { |bp| bp.name == @user_script_phase_name }.should.be.nil
        end
    
        def pipeline_data(pipeline)
      {
        'id' => pipeline.pipeline_id,
        'hash' => pipeline.lir.unique_hash,
        'ephemeral_id' => pipeline.ephemeral_id,
        'workers' =>  pipeline.settings.get('pipeline.workers'),
        'batch_size' =>  pipeline.settings.get('pipeline.batch.size'),
        'representation' => ::LogStash::Config::LIRSerializer.serialize(pipeline.lir)
      }
    end
    
        def fetch_node_stats(agent, stats)
      @global_stats.merge({
        'http_address' => stats.get_shallow(:http_address).value,
        'ephemeral_id' => agent.ephemeral_id
      })
    end
  end
end; end; end

    
        def find_jars(pattern)
      require 'java'
      jar_files = Dir.glob(pattern)
      raise(LogStash::EnvironmentError, I18n.t('logstash.environment.missing-jars', :pattern => pattern)) if jar_files.empty?
      jar_files
    end
    
        context 'windows' do
      windows_host_os.each do |host|
        it '#{host} returns true' do
          allow(LogStash::Environment).to receive(:host_os).and_return(host)
          expect(LogStash::Environment.windows?).to be_truthy
        end
      end
    
            let(:plugin_source) do
          %q[
              grok {
                match => { 'message' => '%{WORD:word}' }
                match => { 'examplefield' => '%{NUMBER:num}' }
                break_on_match => false
              }
          ]
        end
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end