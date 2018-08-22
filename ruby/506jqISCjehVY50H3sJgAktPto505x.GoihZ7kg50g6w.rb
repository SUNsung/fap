
        
          describe 'instance methods' do
    let(:key_attributes) do # these keys are intentionally strings.
      {
        'canDownload' => false,
        'canRevoke' => true,
        'keyId' => 'some-key-id',
        'keyName' => 'fastlane',
        'servicesCount' => 3,
        'services' => [
          {
            'name' => 'APNS',
            'id' => 'U27F4V844T',
            'configurations' => []
          },
          {
            'name' => 'MusicKit',
            'id' => '6A7HVUVQ3M',
            'configurations' => [
              {
                'name' => 'music id test',
                'identifier' => 'music.com.snatchev.test',
                'type' => 'music',
                'prefix' => 'some-prefix-id',
                'id' => 'some-music-kit-id'
              }
            ]
          },
          {
            'name' => 'DeviceCheck',
            'id' => 'DQ8HTZ7739',
            'configurations' => []
          }
        ]
      }
    end
    
        def test_app
      # We call this method, to be sure that all other simulators are killed
      # And a correct one is freshly launched. Switching between multiple simulator
      # in case the user specified multiple targets works with no issues
      # This way it's okay to just call it for the first simulator we're using for
      # the first test run
      open_simulator_for_device(Scan.devices.first) if Scan.devices
      command = @test_command_generator.generate
      prefix_hash = [
        {
          prefix: 'Running Tests: ',
          block: proc do |value|
            value.include?('Touching')
          end
        }
      ]
      exit_status = 0
      FastlaneCore::CommandExecutor.execute(command: command,
                                          print_all: true,
                                      print_command: true,
                                             prefix: prefix_hash,
                                            loading: 'Loading...',
                                              error: proc do |error_output|
                                                begin
                                                  exit_status = $?.exitstatus
                                                  ErrorHandler.handle_build_error(error_output)
                                                rescue => ex
                                                  SlackPoster.new.run({
                                                    build_errors: 1
                                                  })
                                                  raise ex
                                                end
                                              end)
      exit_status
    end
    
          def task_available?(task)
        load_all_tasks
        return tasks.collect(&:title).include?(task)
      end
    
            person_entity = Person.find_by(diaspora_handle: person.diaspora_id)
        expect(person_entity.guid).to eq(person.guid)
        expect(person_entity.serialized_public_key).to eq(person.exported_key)
        expect(person_entity.url).to eq(person.url)