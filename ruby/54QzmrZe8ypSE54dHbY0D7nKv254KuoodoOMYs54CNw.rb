
        
            it 'opens the dry run modal even when clicking on the refresh icon' do
      visit edit_agent_path(agent)
      find('.agent-dry-run-button span.glyphicon').click
      expect(page).to have_text('Event to send (Optional)')
    end
    
              @bar2 = Agents::DotBar.new(name: 'bar2').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.propagate_immediately = true
            agent.disabled = true
            agent.save!
          },
    
          describe '#generate_diff' do
        it 'should check if the agent requires a service' do
          agent_diffs = services_scenario_import.agent_diffs
          basecamp_agent_diff = agent_diffs[0]
          expect(basecamp_agent_diff.requires_service?).to eq(true)
        end
    
          it 'runs until stop is called' do
        mock.instance_of(Rufus::Scheduler).join
        Thread.new { while @agent_runner.instance_variable_get(:@running) != false do sleep 0.1; @agent_runner.stop end }
        @agent_runner.run
      end
    
      describe 'up' do
    it 'should update extract and template options for an existing WebsiteAgent' do
      expect(agent.options).to include('extract' => old_extract,
                                       'template' => old_template)
      ConvertWebsiteAgentTemplateForMerge.new.up
      agent.reload
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
    end
  end
    
      it 'replaces invalid byte sequences in a message' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), level: 3)
    log.message = '\u{3042}\xffA\x95'
    expect { log.save! }.not_to raise_error
    expect(log.message).to eq('\u{3042}<ff>A\<95>')
  end
    
        it 'should provide the since attribute after the first run' do
      time = (Time.now-1.minute).iso8601
      @checker.memory[:last_event] = time
      @checker.save
      expect(@checker.reload.send(:query_parameters)).to eq({:query => {:since => time}})
    end
  end
    
        it 'should raise error when response has an error' do
      stub(HTTParty).post { {'error' => {'message' => 'Sample error'}} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Sample error/)
    end
  end
end

    
            return a.casecmp(b) if a_length == 1 && b_length == 1
        return 1 if a_length == 1
        return -1 if b_length == 1
    
        def push(*names)
      @filters.push *filter_const(names)
    end
    
            def destroy
          authorize! :destroy, @product
          @product.destroy
          respond_with(@product, status: 204)
        end
    
            private
    
      config.vm.define :smartos do |smartos|
    smartos.vm.box = 'smartos-base1310-64-virtualbox-20130806.box'
    smartos.vm.box_url = 'http://dlc-int.openindiana.org/aszeszo/vagrant/smartos-base1310-64-virtualbox-20130806.box'
  end
    
          # Load the script into memory.
      input.scripts[scriptname] = File.read(path)
    end
    
        pkgdata = {
      'arch' => architecture,
      'name' => name,
      'version' => pkg_version,
      'comment' => description,
      'desc' => description,
      'origin' => pkg_origin,
      'maintainer' => maintainer,
      'www' => url,
      # prefix is required, but it doesn't seem to matter
      'prefix' => '/',
    }
    
      def set_default_prefix
    attributes[:prefix] = self.class.default_prefix
    attributes[:prefix_given?] = true
  end
    
    # Use an OS X pkg built with pkgbuild.
#
# Supports input and output. Requires pkgbuild and (for input) pkgutil, part of a
# standard OS X install in 10.7 and higher.
class FPM::Package::OSXpkg < FPM::Package
    
        # Some setup.py's assume $PWD == current directory of setup.py, so let's
    # chdir first.
    ::Dir.chdir(project_dir) do
      flags = [ '--root', staging_path ]
      if !attributes[:python_install_lib].nil?
        flags += [ '--install-lib', File.join(prefix, attributes[:python_install_lib]) ]
      elsif !attributes[:prefix].nil?
        # setup.py install --prefix PREFIX still installs libs to
        # PREFIX/lib64/python2.7/site-packages/
        # but we really want something saner.
        #
        # since prefix is given, but not python_install_lib, assume PREFIX/lib
        flags += [ '--install-lib', File.join(prefix, 'lib') ]
      end
    
          self
    end # def add_symlink
  end
end
