
        
                get '/hot_threads' do
          begin
            ignore_idle_threads = params['ignore_idle_threads'] || true
            options = {:ignore_idle_threads => as_boolean(ignore_idle_threads)}
            options[:threads] = params['threads'].to_i if params.has_key?('threads')
            options[:ordered_by] = params['ordered_by'] if params.has_key?('ordered_by')
            options[:stacktrace_size] = params['stacktrace_size'] if params.has_key?('stacktrace_size')
    
        def self.format_queue_stats(pipeline_id, metric_store)
      path = [:stats, :pipelines, pipeline_id, :queue, :type]
      if metric_store.has_metric?(*path)
        queue_type = metric_store.get_shallow(*path).value
      else
        queue_type = 'memory'
      end
    
          @event.set('[pipeline]', pipeline_data(pipeline))
    
        def load_locale!
      require 'i18n'
      I18n.enforce_available_locales = true
      I18n.load_path << LogStash::Environment.locales_path('en.yml')
      I18n.reload!
      fail 'No locale? This is a bug.' if I18n.available_locales.empty?
    end
    
        # Because we made a mistake in naming the RC version numbers, both rpm and deb view
    # '1.5.0.rc1' higher than '1.5.0'. Setting the epoch to 1 ensures that we get a kind
    # of clean slate as to how we compare package versions. The default epoch is 0, and
    # epoch is sorted first, so a version 1:1.5.0 will have greater priority
    # than 1.5.0.rc4
    out.epoch = 1
    
              it 'should compile correctly' do
            expect(compiled_section).to ir_eql(j.iIf(
                                          rand_meta,
                                          j.eEq(j.eEventValue('[foo]'), j.eEventValue('[bar]')),
                                          j.iIf(rand_meta, j.eEq(j.eEventValue('[bar]'), j.eEventValue('[baz]')),
                                                   splugin('aplugin'),
                                                   j.noop
                                                  ),
                                          j.iIf(
                                            rand_meta,
                                            j.eEq(j.eEventValue('[bar]'), j.eEventValue('[baz]')),
                                            splugin('bplugin'),
                                            j.iIf(
                                              rand_meta,
                                              j.eEq(j.eEventValue('[baz]'), j.eEventValue('[bot]')),
                                              splugin('cplugin'),
                                              splugin('dplugin')
                                            )
                                          )
                                        )
                                       )
          end
          end
        end
      end
    end
    
    require 'bootstrap/environment'